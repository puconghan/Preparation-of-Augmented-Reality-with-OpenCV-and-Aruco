
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.video;



// C++: class BackgroundSubtractorMOG2
//javadoc: BackgroundSubtractorMOG2
public class BackgroundSubtractorMOG2 extends BackgroundSubtractor {

    protected BackgroundSubtractorMOG2(long addr) { super(addr); }


    //
    // C++:   BackgroundSubtractorMOG2::BackgroundSubtractorMOG2()
    //

    //javadoc: BackgroundSubtractorMOG2::BackgroundSubtractorMOG2()
    public   BackgroundSubtractorMOG2()
    {
        
        super( BackgroundSubtractorMOG2_0() );
        
        return;
    }


    //
    // C++:   BackgroundSubtractorMOG2::BackgroundSubtractorMOG2(int history, float varThreshold, bool bShadowDetection = true)
    //

    //javadoc: BackgroundSubtractorMOG2::BackgroundSubtractorMOG2(history, varThreshold, bShadowDetection)
    public   BackgroundSubtractorMOG2(int history, float varThreshold, boolean bShadowDetection)
    {
        
        super( BackgroundSubtractorMOG2_1(history, varThreshold, bShadowDetection) );
        
        return;
    }

    //javadoc: BackgroundSubtractorMOG2::BackgroundSubtractorMOG2(history, varThreshold)
    public   BackgroundSubtractorMOG2(int history, float varThreshold)
    {
        
        super( BackgroundSubtractorMOG2_2(history, varThreshold) );
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   BackgroundSubtractorMOG2::BackgroundSubtractorMOG2()
    private static native long BackgroundSubtractorMOG2_0();

    // C++:   BackgroundSubtractorMOG2::BackgroundSubtractorMOG2(int history, float varThreshold, bool bShadowDetection = true)
    private static native long BackgroundSubtractorMOG2_1(int history, float varThreshold, boolean bShadowDetection);
    private static native long BackgroundSubtractorMOG2_2(int history, float varThreshold);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
