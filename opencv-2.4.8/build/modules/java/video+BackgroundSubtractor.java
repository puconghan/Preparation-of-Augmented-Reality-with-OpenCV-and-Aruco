
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.video;

import org.opencv.core.Algorithm;
import org.opencv.core.Mat;

// C++: class BackgroundSubtractor
//javadoc: BackgroundSubtractor
public class BackgroundSubtractor extends Algorithm {

    protected BackgroundSubtractor(long addr) { super(addr); }


    //
    // C++:  void BackgroundSubtractor::operator ()(Mat image, Mat& fgmask, double learningRate = 0)
    //

    //javadoc: BackgroundSubtractor::operator ()(image, fgmask, learningRate)
    public  void apply(Mat image, Mat fgmask, double learningRate)
    {
        
        apply_0(nativeObj, image.nativeObj, fgmask.nativeObj, learningRate);
        
        return;
    }

    //javadoc: BackgroundSubtractor::operator ()(image, fgmask)
    public  void apply(Mat image, Mat fgmask)
    {
        
        apply_1(nativeObj, image.nativeObj, fgmask.nativeObj);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:  void BackgroundSubtractor::operator ()(Mat image, Mat& fgmask, double learningRate = 0)
    private static native void apply_0(long nativeObj, long image_nativeObj, long fgmask_nativeObj, double learningRate);
    private static native void apply_1(long nativeObj, long image_nativeObj, long fgmask_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
