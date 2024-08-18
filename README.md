# Face Recognition using OpenCV in C++

This project implements face recognition using the OpenCV library in C++. The project is built using CMake and can detect and recognize faces in images or video streams.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Installation

### Prerequisites
- **CMake**: Make sure you have CMake installed. You can download it from [here](https://cmake.org/download/).
- **OpenCV**: Install OpenCV 4.x or higher. You can follow the installation guide [here](https://docs.opencv.org/master/d7/d9f/tutorial_linux_install.html).

### Build the Project

1. **Clone the repository**
    ```bash
    git clone https://github.com/your-username/face-recognition-opencv-cpp.git
    cd face-recognition-opencv-cpp
    ```

2. **Create a build directory and navigate into it**
    ```bash
    mkdir build
    cd build
    ```

3. **Configure the project using CMake**
    ```bash
    cmake ..
    ```

4. **Build the project**
    ```bash
    cmake --build .
    ```

## Usage

1. **Run the executable**
   - To run the face recognition application, use the following command:
    ```bash
    ./FaceRecognition --source <image_path_or_video_device_index>
    ```
   - For example, to use the webcam as input, run:
    ```bash
    ./FaceRecognition --source 0
    ```

2. **Training the Model**
   - Place the images of the faces you want to recognize in the `data/images` directory, ensuring each person has a separate folder named after them.
   - The training process will automatically begin when the application is run for the first time.

## Features

- **Face Detection**: Detects faces in images or live video streams using OpenCV's Haar Cascades or DNN-based face detectors.
- **Face Recognition**: Recognizes faces using algorithms like LBPH, Eigenfaces, or Fisherfaces.
- **Real-time Processing**: Supports real-time face recognition using a webcam.

## Project Structure

```plaintext
face-recognition-opencv-cpp/
│
├── CMakeLists.txt      # CMake configuration file
├── src/
│   ├── main.cpp        # Main source code file
│   ├── FaceRecognizer.cpp # Face recognition implementation
│   └── FaceRecognizer.h   # Header file for FaceRecognizer
├── data/
│   └── images/         # Directory for storing training images
├── models/
│   └── face_model.xml  # Directory for storing the trained model
├── build/              # Directory for the compiled build
├── README.md           # This file
└── .gitignore          # Files and directories to ignore in the repository
