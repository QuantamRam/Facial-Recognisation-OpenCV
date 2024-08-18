#include<iostream>
#include<stdlib.h>
#include<opencv2/objdetect/objdetect.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main() {

	CascadeClassifier faceDetection;
	if (!faceDetection.load("C:\\Users\\sanab\\Downloads\\opencv\\sources\data\\haarcascades\\haarcascade_frontalface_default.xml")) {


		cout << "\n The File Is Not Found";
		exit(0);
	}
	char path[100];
	cout << "\enter the path to facedetection: ";
	cin.getline(path, 100);

	if (img.empty()) {

		cout << "\n image is not loaded";
	}

	else {
		cout << "\n iamge found";
		cout << "\n processing...";

		vector<Rect> faces;

		faceDetection.detectMultiScale(img, faces);

		for (int i = 0; i < faces.size(); i++) {

			Point pt1(faces[i].x, faces[i].y);

			Point pt2((faces[i].x + faces[i].height), (faces[i].y + faces[i].width));

			rectangle(img, pt1, pt2, Scalar(0, 0, 255), 2, 8, 0);


		}

		imwrite("C:\\gs\\output.jpg", img);

		cout << "\n face detected ok!";



	}








	return 0;

}


