
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.video;

import org.opencv.core.Mat;

// C++: class KalmanFilter
//javadoc: KalmanFilter
public class KalmanFilter {

    protected final long nativeObj;
    protected KalmanFilter(long addr) { nativeObj = addr; }


    //
    // C++:   KalmanFilter::KalmanFilter()
    //

    //javadoc: KalmanFilter::KalmanFilter()
    public   KalmanFilter()
    {
        
        nativeObj = KalmanFilter_0();
        
        return;
    }


    //
    // C++:   KalmanFilter::KalmanFilter(int dynamParams, int measureParams, int controlParams = 0, int type = CV_32F)
    //

    //javadoc: KalmanFilter::KalmanFilter(dynamParams, measureParams, controlParams, type)
    public   KalmanFilter(int dynamParams, int measureParams, int controlParams, int type)
    {
        
        nativeObj = KalmanFilter_1(dynamParams, measureParams, controlParams, type);
        
        return;
    }

    //javadoc: KalmanFilter::KalmanFilter(dynamParams, measureParams)
    public   KalmanFilter(int dynamParams, int measureParams)
    {
        
        nativeObj = KalmanFilter_2(dynamParams, measureParams);
        
        return;
    }


    //
    // C++:  Mat KalmanFilter::correct(Mat measurement)
    //

    //javadoc: KalmanFilter::correct(measurement)
    public  Mat correct(Mat measurement)
    {
        
        Mat retVal = new Mat(correct_0(nativeObj, measurement.nativeObj));
        
        return retVal;
    }


    //
    // C++:  Mat KalmanFilter::predict(Mat control = Mat())
    //

    //javadoc: KalmanFilter::predict(control)
    public  Mat predict(Mat control)
    {
        
        Mat retVal = new Mat(predict_0(nativeObj, control.nativeObj));
        
        return retVal;
    }

    //javadoc: KalmanFilter::predict()
    public  Mat predict()
    {
        
        Mat retVal = new Mat(predict_1(nativeObj));
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   KalmanFilter::KalmanFilter()
    private static native long KalmanFilter_0();

    // C++:   KalmanFilter::KalmanFilter(int dynamParams, int measureParams, int controlParams = 0, int type = CV_32F)
    private static native long KalmanFilter_1(int dynamParams, int measureParams, int controlParams, int type);
    private static native long KalmanFilter_2(int dynamParams, int measureParams);

    // C++:  Mat KalmanFilter::correct(Mat measurement)
    private static native long correct_0(long nativeObj, long measurement_nativeObj);

    // C++:  Mat KalmanFilter::predict(Mat control = Mat())
    private static native long predict_0(long nativeObj, long control_nativeObj);
    private static native long predict_1(long nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
