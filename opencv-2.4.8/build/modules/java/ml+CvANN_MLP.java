
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;

// C++: class CvANN_MLP
//javadoc: CvANN_MLP
public class CvANN_MLP extends CvStatModel {

    protected CvANN_MLP(long addr) { super(addr); }


    public static final int
            IDENTITY = 0,
            SIGMOID_SYM = 1,
            GAUSSIAN = 2,
            UPDATE_WEIGHTS = 1,
            NO_INPUT_SCALE = 2,
            NO_OUTPUT_SCALE = 4;


    //
    // C++:   CvANN_MLP::CvANN_MLP()
    //

    //javadoc: CvANN_MLP::CvANN_MLP()
    public   CvANN_MLP()
    {
        
        super( CvANN_MLP_0() );
        
        return;
    }


    //
    // C++:   CvANN_MLP::CvANN_MLP(Mat layerSizes, int activateFunc = CvANN_MLP::SIGMOID_SYM, double fparam1 = 0, double fparam2 = 0)
    //

    //javadoc: CvANN_MLP::CvANN_MLP(layerSizes, activateFunc, fparam1, fparam2)
    public   CvANN_MLP(Mat layerSizes, int activateFunc, double fparam1, double fparam2)
    {
        
        super( CvANN_MLP_1(layerSizes.nativeObj, activateFunc, fparam1, fparam2) );
        
        return;
    }

    //javadoc: CvANN_MLP::CvANN_MLP(layerSizes)
    public   CvANN_MLP(Mat layerSizes)
    {
        
        super( CvANN_MLP_2(layerSizes.nativeObj) );
        
        return;
    }


    //
    // C++:  void CvANN_MLP::clear()
    //

    //javadoc: CvANN_MLP::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  void CvANN_MLP::create(Mat layerSizes, int activateFunc = CvANN_MLP::SIGMOID_SYM, double fparam1 = 0, double fparam2 = 0)
    //

    //javadoc: CvANN_MLP::create(layerSizes, activateFunc, fparam1, fparam2)
    public  void create(Mat layerSizes, int activateFunc, double fparam1, double fparam2)
    {
        
        create_0(nativeObj, layerSizes.nativeObj, activateFunc, fparam1, fparam2);
        
        return;
    }

    //javadoc: CvANN_MLP::create(layerSizes)
    public  void create(Mat layerSizes)
    {
        
        create_1(nativeObj, layerSizes.nativeObj);
        
        return;
    }


    //
    // C++:  float CvANN_MLP::predict(Mat inputs, Mat& outputs)
    //

    //javadoc: CvANN_MLP::predict(inputs, outputs)
    public  float predict(Mat inputs, Mat outputs)
    {
        
        float retVal = predict_0(nativeObj, inputs.nativeObj, outputs.nativeObj);
        
        return retVal;
    }


    //
    // C++:  int CvANN_MLP::train(Mat inputs, Mat outputs, Mat sampleWeights, Mat sampleIdx = cv::Mat(), CvANN_MLP_TrainParams params = CvANN_MLP_TrainParams(), int flags = 0)
    //

    //javadoc: CvANN_MLP::train(inputs, outputs, sampleWeights, sampleIdx, params, flags)
    public  int train(Mat inputs, Mat outputs, Mat sampleWeights, Mat sampleIdx, CvANN_MLP_TrainParams params, int flags)
    {
        
        int retVal = train_0(nativeObj, inputs.nativeObj, outputs.nativeObj, sampleWeights.nativeObj, sampleIdx.nativeObj, params.nativeObj, flags);
        
        return retVal;
    }

    //javadoc: CvANN_MLP::train(inputs, outputs, sampleWeights)
    public  int train(Mat inputs, Mat outputs, Mat sampleWeights)
    {
        
        int retVal = train_1(nativeObj, inputs.nativeObj, outputs.nativeObj, sampleWeights.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvANN_MLP::CvANN_MLP()
    private static native long CvANN_MLP_0();

    // C++:   CvANN_MLP::CvANN_MLP(Mat layerSizes, int activateFunc = CvANN_MLP::SIGMOID_SYM, double fparam1 = 0, double fparam2 = 0)
    private static native long CvANN_MLP_1(long layerSizes_nativeObj, int activateFunc, double fparam1, double fparam2);
    private static native long CvANN_MLP_2(long layerSizes_nativeObj);

    // C++:  void CvANN_MLP::clear()
    private static native void clear_0(long nativeObj);

    // C++:  void CvANN_MLP::create(Mat layerSizes, int activateFunc = CvANN_MLP::SIGMOID_SYM, double fparam1 = 0, double fparam2 = 0)
    private static native void create_0(long nativeObj, long layerSizes_nativeObj, int activateFunc, double fparam1, double fparam2);
    private static native void create_1(long nativeObj, long layerSizes_nativeObj);

    // C++:  float CvANN_MLP::predict(Mat inputs, Mat& outputs)
    private static native float predict_0(long nativeObj, long inputs_nativeObj, long outputs_nativeObj);

    // C++:  int CvANN_MLP::train(Mat inputs, Mat outputs, Mat sampleWeights, Mat sampleIdx = cv::Mat(), CvANN_MLP_TrainParams params = CvANN_MLP_TrainParams(), int flags = 0)
    private static native int train_0(long nativeObj, long inputs_nativeObj, long outputs_nativeObj, long sampleWeights_nativeObj, long sampleIdx_nativeObj, long params_nativeObj, int flags);
    private static native int train_1(long nativeObj, long inputs_nativeObj, long outputs_nativeObj, long sampleWeights_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
