
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.video;



// C++: class BackgroundSubtractorMOG
//javadoc: BackgroundSubtractorMOG
public class BackgroundSubtractorMOG extends BackgroundSubtractor {

    protected BackgroundSubtractorMOG(long addr) { super(addr); }


    //
    // C++:   BackgroundSubtractorMOG::BackgroundSubtractorMOG()
    //

    //javadoc: BackgroundSubtractorMOG::BackgroundSubtractorMOG()
    public   BackgroundSubtractorMOG()
    {
        
        super( BackgroundSubtractorMOG_0() );
        
        return;
    }


    //
    // C++:   BackgroundSubtractorMOG::BackgroundSubtractorMOG(int history, int nmixtures, double backgroundRatio, double noiseSigma = 0)
    //

    //javadoc: BackgroundSubtractorMOG::BackgroundSubtractorMOG(history, nmixtures, backgroundRatio, noiseSigma)
    public   BackgroundSubtractorMOG(int history, int nmixtures, double backgroundRatio, double noiseSigma)
    {
        
        super( BackgroundSubtractorMOG_1(history, nmixtures, backgroundRatio, noiseSigma) );
        
        return;
    }

    //javadoc: BackgroundSubtractorMOG::BackgroundSubtractorMOG(history, nmixtures, backgroundRatio)
    public   BackgroundSubtractorMOG(int history, int nmixtures, double backgroundRatio)
    {
        
        super( BackgroundSubtractorMOG_2(history, nmixtures, backgroundRatio) );
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   BackgroundSubtractorMOG::BackgroundSubtractorMOG()
    private static native long BackgroundSubtractorMOG_0();

    // C++:   BackgroundSubtractorMOG::BackgroundSubtractorMOG(int history, int nmixtures, double backgroundRatio, double noiseSigma = 0)
    private static native long BackgroundSubtractorMOG_1(int history, int nmixtures, double backgroundRatio, double noiseSigma);
    private static native long BackgroundSubtractorMOG_2(int history, int nmixtures, double backgroundRatio);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
