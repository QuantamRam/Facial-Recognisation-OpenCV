# Face Recognition using OpenCV

This project demonstrates face recognition using the OpenCV library. The application can detect faces in images and recognize them using various machine learning models.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Installation

1. **Clone the repository**
    ```bash
    git clone https://github.com/your-username/face-recognition-opencv.git
    cd face-recognition-opencv
    ```

2. **Set up a virtual environment (optional but recommended)**
    ```bash
    python -m venv venv
    source venv/bin/activate  # On Windows use `venv\Scripts\activate`
    ```

3. **Install the required packages**
    ```bash
    pip install -r requirements.txt
    ```

## Usage

1. **Collect or provide images**
   - Place images of faces you want to recognize in the `data/images` directory. Ensure each person has a separate folder with their name as the folder name.

2. **Train the model**
   - Run the script to train the model on your dataset:
    ```bash
    python train.py
    ```

3. **Recognize faces**
   - Use the trained model to recognize faces in images or through a live webcam feed:
    ```bash
    python recognize.py --source <image_path_or_video_device_index>
    ```
   - For example, to use the webcam as input, run:
    ```bash
    python recognize.py --source 0
    ```

## Features

- **Face Detection**: Detects faces in images or live video streams using OpenCV's Haar Cascades or DNN-based face detectors.
- **Face Recognition**: Recognizes faces using machine learning models like LBPH, Eigenfaces, or Fisherfaces.
- **Real-time Processing**: Supports real-time face recognition using a webcam.

## Project Structure

```plaintext
face-recognition-opencv/
│
├── data/
│   └── images/        # Directory for storing training images
├── models/
│   └── face_model.xml # Directory for storing the trained model
├── scripts/
│   ├── train.py       # Script for training the model
│   └── recognize.py   # Script for recognizing faces
├── README.md          # This file
├── requirements.txt   # List of Python packages required
└── .gitignore         # Files and directories to ignore in the repository
