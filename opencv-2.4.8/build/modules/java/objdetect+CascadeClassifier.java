
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.objdetect;

import java.lang.String;
import org.opencv.core.Mat;
import org.opencv.core.MatOfDouble;
import org.opencv.core.MatOfInt;
import org.opencv.core.MatOfRect;
import org.opencv.core.Size;

// C++: class CascadeClassifier
//javadoc: CascadeClassifier
public class CascadeClassifier {

    protected final long nativeObj;
    protected CascadeClassifier(long addr) { nativeObj = addr; }


    //
    // C++:   CascadeClassifier::CascadeClassifier()
    //

    //javadoc: CascadeClassifier::CascadeClassifier()
    public   CascadeClassifier()
    {
        
        nativeObj = CascadeClassifier_0();
        
        return;
    }


    //
    // C++:   CascadeClassifier::CascadeClassifier(string filename)
    //

    //javadoc: CascadeClassifier::CascadeClassifier(filename)
    public   CascadeClassifier(String filename)
    {
        
        nativeObj = CascadeClassifier_1(filename);
        
        return;
    }


    //
    // C++:  void CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
    //

    //javadoc: CascadeClassifier::detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize)
    public  void detectMultiScale(Mat image, MatOfRect objects, double scaleFactor, int minNeighbors, int flags, Size minSize, Size maxSize)
    {
        Mat objects_mat = objects;
        detectMultiScale_0(nativeObj, image.nativeObj, objects_mat.nativeObj, scaleFactor, minNeighbors, flags, minSize.width, minSize.height, maxSize.width, maxSize.height);
        
        return;
    }

    //javadoc: CascadeClassifier::detectMultiScale(image, objects)
    public  void detectMultiScale(Mat image, MatOfRect objects)
    {
        Mat objects_mat = objects;
        detectMultiScale_1(nativeObj, image.nativeObj, objects_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int rejectLevels, vector_double levelWeights, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size(), bool outputRejectLevels = false)
    //

    //javadoc: CascadeClassifier::detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels)
    public  void detectMultiScale(Mat image, MatOfRect objects, MatOfInt rejectLevels, MatOfDouble levelWeights, double scaleFactor, int minNeighbors, int flags, Size minSize, Size maxSize, boolean outputRejectLevels)
    {
        Mat objects_mat = objects;
        Mat rejectLevels_mat = rejectLevels;
        Mat levelWeights_mat = levelWeights;
        detectMultiScale_2(nativeObj, image.nativeObj, objects_mat.nativeObj, rejectLevels_mat.nativeObj, levelWeights_mat.nativeObj, scaleFactor, minNeighbors, flags, minSize.width, minSize.height, maxSize.width, maxSize.height, outputRejectLevels);
        
        return;
    }

    //javadoc: CascadeClassifier::detectMultiScale(image, objects, rejectLevels, levelWeights)
    public  void detectMultiScale(Mat image, MatOfRect objects, MatOfInt rejectLevels, MatOfDouble levelWeights)
    {
        Mat objects_mat = objects;
        Mat rejectLevels_mat = rejectLevels;
        Mat levelWeights_mat = levelWeights;
        detectMultiScale_3(nativeObj, image.nativeObj, objects_mat.nativeObj, rejectLevels_mat.nativeObj, levelWeights_mat.nativeObj);
        
        return;
    }


    //
    // C++:  bool CascadeClassifier::empty()
    //

    //javadoc: CascadeClassifier::empty()
    public  boolean empty()
    {
        
        boolean retVal = empty_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool CascadeClassifier::load(string filename)
    //

    //javadoc: CascadeClassifier::load(filename)
    public  boolean load(String filename)
    {
        
        boolean retVal = load_0(nativeObj, filename);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CascadeClassifier::CascadeClassifier()
    private static native long CascadeClassifier_0();

    // C++:   CascadeClassifier::CascadeClassifier(string filename)
    private static native long CascadeClassifier_1(String filename);

    // C++:  void CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
    private static native void detectMultiScale_0(long nativeObj, long image_nativeObj, long objects_mat_nativeObj, double scaleFactor, int minNeighbors, int flags, double minSize_width, double minSize_height, double maxSize_width, double maxSize_height);
    private static native void detectMultiScale_1(long nativeObj, long image_nativeObj, long objects_mat_nativeObj);

    // C++:  void CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int rejectLevels, vector_double levelWeights, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size(), bool outputRejectLevels = false)
    private static native void detectMultiScale_2(long nativeObj, long image_nativeObj, long objects_mat_nativeObj, long rejectLevels_mat_nativeObj, long levelWeights_mat_nativeObj, double scaleFactor, int minNeighbors, int flags, double minSize_width, double minSize_height, double maxSize_width, double maxSize_height, boolean outputRejectLevels);
    private static native void detectMultiScale_3(long nativeObj, long image_nativeObj, long objects_mat_nativeObj, long rejectLevels_mat_nativeObj, long levelWeights_mat_nativeObj);

    // C++:  bool CascadeClassifier::empty()
    private static native boolean empty_0(long nativeObj);

    // C++:  bool CascadeClassifier::load(string filename)
    private static native boolean load_0(long nativeObj, String filename);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
