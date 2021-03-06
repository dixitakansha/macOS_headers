//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, MTLTexture;

@interface DolbyVisionComposer : NSObject
{
    unsigned long long _frameIndex;
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _defaultLibrary;
    id <MTLComputePipelineState> _horizontalHalfLumaKernel;
    id <MTLComputePipelineState> _verticalHalfLumaKernel;
    id <MTLComputePipelineState> _verticalResampleKernel;
    id <MTLComputePipelineState> _horizontalResampleKernel;
    id <MTLComputePipelineState> _composeLumaKernel;
    id <MTLComputePipelineState> _composeChromaKernel;
    id <MTLComputePipelineState> _composeYUVKernel;
    id <MTLComputePipelineState> _sdr2cif10;
    id <MTLComputePipelineState> _packedHDR10toRGB;
    id <MTLComputePipelineState> _packed422HDR10toRGB;
    id <MTLComputePipelineState> _packedHDR10toRGB_YUVTM;
    id <MTLComputePipelineState> _packed422HDR10toRGB_YUVTM;
    id <MTLComputePipelineState> _packedDolbyYUVtoRGB_YUVTM[2];
    id <MTLComputePipelineState> _packed422DolbyYUVtoRGB_YUVTM[2];
    id <MTLComputePipelineState> _packedDolbyIPTtoRGB_YUVTM[2];
    id <MTLComputePipelineState> _packed422DolbyIPTtoRGB_YUVTM[2];
    id <MTLComputePipelineState> _singleLayerIntegratedKernel;
    id <MTLComputePipelineState> _singleLayerIntegratedIPTKernel;
    id <MTLComputePipelineState> _singleLayerIntegratedKernelPlanar[2];
    id <MTLComputePipelineState> _singleLayerIntegratedIPTKernelPlanar[2];
    id <MTLComputePipelineState> _singleLayerIntegratedKernelPackedPlanar[2];
    id <MTLComputePipelineState> _singleLayerIntegratedIPTKernelPackedPlanar[2];
    id <MTLComputePipelineState> _yuvP422PackedPlanar[2];
    id <MTLComputePipelineState> _iptP422PackedPlanar[2];
    id <MTLComputePipelineState> _packedHDR10Cif10;
    id <MTLComputePipelineState> _packed422HDR10Cif10;
    id <MTLComputePipelineState> _unpackeX420HDR10FP16;
    id <MTLComputePipelineState> _singleLayer16bit444Kernel;
    id <MTLTexture> _polynomialTables[3];
    id <MTLTexture> _currentPolynomialTable;
    id <MTLBuffer> _dequantizelTable;
    id <MTLBuffer> _configBuffers[3];
    id <MTLBuffer> _config;
    id <MTLTexture> _blTexture;
    id <MTLTexture> _blTextureUV;
    id <MTLTexture> _blSubsampledTempTexture;
    id <MTLTexture> _blSubsampledTexture;
    id <MTLTexture> _elTexture;
    id <MTLTexture> _elTextureUV;
    id <MTLTexture> _outputTexture[3];
    id <MTLTexture> _outputTextureUV;
    id <MTLTexture> _pq2LTable;
    unsigned int _pq2LTableSize;
    id <MTLTexture> _scalingFactorTable;
    float _scalingFactorTableBuffer[1024];
    id <MTLTexture> _yuvScalingFactorTable;
    float _yuvScalingFactorTableBuffer[2048];
    float _prev_slope;
    float _prev_c1;
    float _prev_c2;
    float _prev_c3;
    id <MTLTexture> _l2PQTable0;
    id <MTLTexture> _l2PQTable1;
    unsigned int _l2PQTableSize;
    float _l2PQMidPoint;
    float _l2PQMaxPoint;
    BOOL _dumpPolynomialResult;
    unsigned int _inputPixelFormat;
    BOOL _isPackedInputBuffer;
    struct __sFILE *_polynomialDumpFile;
    struct __CVPixelBufferPool *_polynomialDumpOutputPool;
    id <MTLTexture> _dumpTextureY;
    id <MTLTexture> _dumpTextureUV;
    unsigned int _createScalingTableIndex;
    float _cached_target_white;
    float _cached_target_black;
    float _cached_source_white;
    float _cached_source_black;
    BOOL _yuvCombinedCompose;
    BOOL _preSubsampleLumaForMMR;
    BOOL _bypassDisplayManagement;
}

@property BOOL bypassDisplayManagement; // @synthesize bypassDisplayManagement=_bypassDisplayManagement;
@property BOOL preSubsampleLumaForMMR; // @synthesize preSubsampleLumaForMMR=_preSubsampleLumaForMMR;
@property BOOL yuvCombinedCompose; // @synthesize yuvCombinedCompose=_yuvCombinedCompose;
- (void).cxx_destruct;
- (void)dumpPolynomialMappingResult:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)setupPolynomiaResultTextures;
- (void)initPolynomiaResultDump;
- (void)createScalingFactorTableFromDMConfig:(CDStruct_400e21d3 *)arg1;
- (void)fillInScalingTable_YUVTM:(CDStruct_400e21d3 *)arg1 target_White:(float)arg2 target_Black:(float)arg3 source_White:(float)arg4 source_Black:(float)arg5 satBoost:(float)arg6 scalingFactor:(BOOL)arg7;
- (void)createScalingTable_YUVTM;
- (void)createL2PQTable;
- (void)createPQ2LTable;
- (void)setupComposerKernelConfiguration:(CDStruct_0259fb3e *)arg1 fromMetaData:(CDStruct_895ff2bf *)arg2;
- (void)encodeComposeCombinedToCommandBuffer:(id)arg1;
- (void)encodeComposeChromaToCommandBuffer:(id)arg1 withMetaData:(CDStruct_895ff2bf *)arg2;
- (void)encodeComposeLumaToCommandBuffer:(id)arg1;
- (void)encodeSubsampleLumaVerticalToCommandBuffer:(id)arg1;
- (void)encodeSubsampleLumaHorizontalToCommandBuffer:(id)arg1;
- (void)setupOutputTexturesWithBuffer:(struct __IOSurface *)arg1;
- (void)setupInputTexturesWithBL:(struct __IOSurface *)arg1 EL:(struct __IOSurface *)arg2 Output:(struct __IOSurface *)arg3 MetaData:(CDStruct_895ff2bf *)arg4;
- (void)setupInputBuffersWithMetadata:(CDStruct_895ff2bf *)arg1;
- (void)initBuffers;
- (void)encodeDualLayerToCommandBuffer:(id)arg1 BL:(struct __IOSurface *)arg2 EL:(struct __IOSurface *)arg3 Output:(struct __IOSurface *)arg4 MetaData:(CDStruct_895ff2bf *)arg5 tcControl:(struct ToneCurve_Control *)arg6;
- (void)macSetupEncoderForCommandBuffer:(id)arg1 DMData:(CDStruct_6fbc3b41 *)arg2 dmConfig:(id)arg3 isHdr10OnMac:(BOOL)arg4 onHDR10TV:(BOOL)arg5;
- (void)macSetupToneMappingWithContent:(BOOL)arg1 Output:(struct __IOSurface *)arg2 DMData:(CDStruct_6fbc3b41 *)arg3 tcControl:(struct ToneCurve_Control *)arg4 hdrControl:(CDStruct_bea360c6 *)arg5 hdr10InfoFrame:(CDStruct_52986d3b *)arg6 dmConfig:(CDStruct_400e21d3 *)arg7 hdr10OnMac:(BOOL)arg8 onHDR10TV:(BOOL)arg9;
- (void)embeddedSetupEncoderForCommandBuffer:(id)arg1 DMData:(CDStruct_6fbc3b41 *)arg2 dmConfig:(id)arg3 isInput422:(BOOL)arg4 hasThreeOutputPlane:(BOOL)arg5 isSdrOnDolbyOrHDR10:(BOOL)arg6 isHDR10OnHDR10TV:(BOOL)arg7 isDolbyOnHDR10TV:(BOOL)arg8 isHDR10OnDolby:(BOOL)arg9 isHDR10OnPad:(BOOL)arg10 isDoviOnPad:(BOOL)arg11;
- (void)embeddedSetupToneMappingWithContent:(BOOL)arg1 Output:(struct __IOSurface *)arg2 DMData:(CDStruct_6fbc3b41 *)arg3 tcControl:(struct ToneCurve_Control *)arg4 hdrControl:(CDStruct_bea360c6 *)arg5 hdr10InfoFrame:(CDStruct_52986d3b *)arg6 dmConfig:(CDStruct_400e21d3 *)arg7 hdr10OnPad:(BOOL)arg8 onHDR10TV:(BOOL)arg9;
- (void)encodeSingleLayerToCommandBuffer:(id)arg1 BL:(struct __IOSurface *)arg2 Output:(struct __IOSurface *)arg3 ComposerData:(CDStruct_895ff2bf *)arg4 DMData:(CDStruct_6fbc3b41 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_bea360c6 *)arg7 hdr10InfoFrame:(CDStruct_52986d3b *)arg8;
- (void)checkForContent:(unsigned int)arg1 contentReturn1:(char *)arg2 contentReturn2:(char *)arg3 forDisplay:(unsigned int)arg4 displayReturn1:(char *)arg5 displayReturn2:(char *)arg6 displayReturn3:(char *)arg7 displayReturn4:(char *)arg8;
- (void)checkInputFormats:(unsigned int)arg1 returnInput1:(char *)arg2 returnInput2:(char *)arg3 outputFormat:(unsigned int)arg4 returnOutput1:(char *)arg5 returnOutput2:(char *)arg6 returnOutput3:(char *)arg7 returnOutput4:(char *)arg8;
- (void)encodeToCommandBuffer:(id)arg1 BL:(struct __IOSurface *)arg2 EL:(struct __IOSurface *)arg3 Output:(struct __IOSurface *)arg4 ComposerData:(CDStruct_895ff2bf *)arg5 DMData:(CDStruct_6fbc3b41 *)arg6 tcControl:(struct ToneCurve_Control *)arg7 hdrControl:(CDStruct_bea360c6 *)arg8 hdr10InfoFrame:(CDStruct_52986d3b *)arg9;
- (void)createKernels;
- (id)createComputePipeLineWithName:(id)arg1 useTrim:(_Bool)arg2;
- (void)setupMetal;
- (id)initWithDevice:(id)arg1;

@end

