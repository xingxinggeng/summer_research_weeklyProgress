#include "convLayer.h"
#include "readdata.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file("..\\date\\test_list.txt");   //name list of test images
    ifstream lab("..\\date\\test_labels.txt");  //label list of test image
    string filename;
    const char *file_name;
    string line, label;
    string filepath = "..\\date\\images\\";  //path of image data

    ReadData *m_Readdata= new ReadData("..\\date\\images\\image1.jpg", 224, 224, 3);
    float *inputPictureData = m_Readdata->ReadInput("..\\date\\images\\image1.jpg");

    // ConvlayerDw = new ConvLayer(pcConvDwWname, nInputNum, nInputNum, nInputWidth, 3, 1, nStride, nInputNum);
    // ConvlayerSep = new ConvLayer(pcConvSepWname, nInputNum, nOutputNum, nInputWidth / nStride, 1, 0);
    // ConvlayerDw->forward(inputPictureData);
    // ConvlayerSep->forward(ConvlayerDw->GetOutput());

	
    return 0;
}