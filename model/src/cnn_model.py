from glob import glob
from tensorflow.python.keras.callbacks import EarlyStopping , ModelCheckpoint
from tensorflow.python.keras.layers import Conv2D , MaxPooling2D , Flatten, Dense, Dropout
import matplotlib.pyplot as plt
import tensorflow as tf
imgWidth = 256
imgHeight = 256
batchSize = 32
epochs = 10

trainDir = './dataset/train/'
numOfClasses = len(glob(trainDir + '/*'))
validationDir = './dataset/validation/'
print(numOfClasses)

train_data_gen = tf.keras.preprocessing.image.ImageDataGenerator(
    rescale = 1./255,
    rotation_range = 30,
    zoom_range=0.4,
    horizontal_flip=True,
    shear_range=0.4,
)

train_generator = train_data_gen.flow_from_directory(
    trainDir, 
    batch_size=batchSize,
    class_mode='categorical',
    target_size=(imgWidth,imgHeight),
)

validDir = './dataset/validation/'
validation_data_gen = tf.keras.preprocessing.image.ImageDataGenerator(rescale=1./255)

validation_generator = validation_data_gen.flow_from_directory(
    validationDir,
    batch_size=batchSize,class_mode='categorical',
    target_size=(imgWidth,imgHeight))


callback = tf.keras.callbacks.EarlyStopping(monitor='val_loss', patience=5, verbose=1, mode='auto')

ModelFileName = './models/ChessModel.h5'
bestModel = ModelCheckpoint(ModelFileName, monitor='val_accuracy', verbose=1, save_best_only=True)

model = tf.keras.models.Sequential([
    Conv2D(32, (3,3) , activation='relu' , input_shape=(imgHeight, imgWidth, 3) ) ,
    MaxPooling2D(2,2),
    
    Conv2D(64 , (3,3) , activation='relu'),
    MaxPooling2D(2,2),

    Conv2D(64 , (3,3) , activation='relu'),
    MaxPooling2D(2,2),

    Conv2D(128 , (3,3) , activation='relu'),
    MaxPooling2D(2,2),

    Conv2D(256 , (3,3) , activation='relu'),
    MaxPooling2D(2,2),

    Flatten(),

    Dense(512 , activation='relu'),
    Dense(512 , activation='relu'),

    Dense(numOfClasses , activation='softmax')
])

model.compile(optimizer='adam' , loss='categorical_crossentropy' , metrics=['accuracy'])

history = model.fit(train_generator,
                    epochs=epochs,
                    verbose=1,
                    validation_data=validation_generator,
                    callbacks=[bestModel] )

acc = history.history['accuracy']
val_acc = history.history['val_accuracy']
loss = history.history['loss']
val_loss = history.history['val_loss']

epochsRange = range(len(acc))

fig = plt.figure(figsize=(14,7))
plt.plot(epochsRange, acc, 'r', label='Training Accuracy')
plt.plot(epochsRange, val_acc, 'b', label='Validation Accuracy')
plt.title('Training and Validation Accuracy')
plt.xlabel('Epochs')
plt.ylabel('Accuracy')
plt.legend(loc='lower right')
plt.show()

#loss chart
fig2 = plt.figure(figsize=(14,7))
plt.plot(epochs, loss , 'r', label="Train loss")
plt.plot(epochs, val_loss , 'b', label="Validation loss")
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.title('Train and validation Loss')
plt.legend(loc='upper right')
plt.show()