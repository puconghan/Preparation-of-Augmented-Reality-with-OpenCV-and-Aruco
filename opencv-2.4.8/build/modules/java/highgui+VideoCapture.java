
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.highgui;

import java.lang.String;
import org.opencv.core.Mat;

// C++: class VideoCapture
//javadoc: VideoCapture
public class VideoCapture {

    protected final long nativeObj;
    protected VideoCapture(long addr) { nativeObj = addr; }


    //
    // C++:   VideoCapture::VideoCapture()
    //

    //javadoc: VideoCapture::VideoCapture()
    public   VideoCapture()
    {
        
        nativeObj = VideoCapture_0();
        
        return;
    }


    //
    // C++:   VideoCapture::VideoCapture(string filename)
    //

    //javadoc: VideoCapture::VideoCapture(filename)
    public   VideoCapture(String filename)
    {
        
        nativeObj = VideoCapture_1(filename);
        
        return;
    }


    //
    // C++:   VideoCapture::VideoCapture(int device)
    //

    //javadoc: VideoCapture::VideoCapture(device)
    public   VideoCapture(int device)
    {
        
        nativeObj = VideoCapture_2(device);
        
        return;
    }


    //
    // C++:  double VideoCapture::get(int propId)
    //

    //javadoc: VideoCapture::get(propId)
    public  double get(int propId)
    {
        
        double retVal = get_0(nativeObj, propId);
        
        return retVal;
    }


    //
    // C++:  bool VideoCapture::grab()
    //

    //javadoc: VideoCapture::grab()
    public  boolean grab()
    {
        
        boolean retVal = grab_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool VideoCapture::isOpened()
    //

    //javadoc: VideoCapture::isOpened()
    public  boolean isOpened()
    {
        
        boolean retVal = isOpened_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool VideoCapture::open(string filename)
    //

    //javadoc: VideoCapture::open(filename)
    public  boolean open(String filename)
    {
        
        boolean retVal = open_0(nativeObj, filename);
        
        return retVal;
    }


    //
    // C++:  bool VideoCapture::open(int device)
    //

    //javadoc: VideoCapture::open(device)
    public  boolean open(int device)
    {
        
        boolean retVal = open_1(nativeObj, device);
        
        return retVal;
    }


    //
    // C++:  bool VideoCapture::read(Mat& image)
    //

    //javadoc: VideoCapture::read(image)
    public  boolean read(Mat image)
    {
        
        boolean retVal = read_0(nativeObj, image.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void VideoCapture::release()
    //

    //javadoc: VideoCapture::release()
    public  void release()
    {
        
        release_0(nativeObj);
        
        return;
    }


    //
    // C++:  bool VideoCapture::retrieve(Mat& image, int channel = 0)
    //

    //javadoc: VideoCapture::retrieve(image, channel)
    public  boolean retrieve(Mat image, int channel)
    {
        
        boolean retVal = retrieve_0(nativeObj, image.nativeObj, channel);
        
        return retVal;
    }

    //javadoc: VideoCapture::retrieve(image)
    public  boolean retrieve(Mat image)
    {
        
        boolean retVal = retrieve_1(nativeObj, image.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool VideoCapture::set(int propId, double value)
    //

    //javadoc: VideoCapture::set(propId, value)
    public  boolean set(int propId, double value)
    {
        
        boolean retVal = set_0(nativeObj, propId, value);
        
        return retVal;
    }


    public java.util.List<org.opencv.core.Size> getSupportedPreviewSizes()
    {
        String[] sizes_str = getSupportedPreviewSizes_0(nativeObj).split(",");
        java.util.List<org.opencv.core.Size> sizes = new java.util.ArrayList<org.opencv.core.Size>(sizes_str.length);

        for (String str : sizes_str) {
            String[] wh = str.split("x");
            sizes.add(new org.opencv.core.Size(Double.parseDouble(wh[0]), Double.parseDouble(wh[1])));
        }

        return sizes;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   VideoCapture::VideoCapture()
    private static native long VideoCapture_0();

    // C++:   VideoCapture::VideoCapture(string filename)
    private static native long VideoCapture_1(String filename);

    // C++:   VideoCapture::VideoCapture(int device)
    private static native long VideoCapture_2(int device);

    // C++:  double VideoCapture::get(int propId)
    private static native double get_0(long nativeObj, int propId);

    // C++:  bool VideoCapture::grab()
    private static native boolean grab_0(long nativeObj);

    // C++:  bool VideoCapture::isOpened()
    private static native boolean isOpened_0(long nativeObj);

    // C++:  bool VideoCapture::open(string filename)
    private static native boolean open_0(long nativeObj, String filename);

    // C++:  bool VideoCapture::open(int device)
    private static native boolean open_1(long nativeObj, int device);

    // C++:  bool VideoCapture::read(Mat& image)
    private static native boolean read_0(long nativeObj, long image_nativeObj);

    // C++:  void VideoCapture::release()
    private static native void release_0(long nativeObj);

    // C++:  bool VideoCapture::retrieve(Mat& image, int channel = 0)
    private static native boolean retrieve_0(long nativeObj, long image_nativeObj, int channel);
    private static native boolean retrieve_1(long nativeObj, long image_nativeObj);

    // C++:  bool VideoCapture::set(int propId, double value)
    private static native boolean set_0(long nativeObj, int propId, double value);

    private static native String getSupportedPreviewSizes_0(long nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
