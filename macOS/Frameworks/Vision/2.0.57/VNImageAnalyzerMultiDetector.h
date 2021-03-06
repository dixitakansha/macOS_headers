//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector : VNDetector
{
    unsigned long long _model;
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;
    struct shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;
}

+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)modelForRequestDetectionLevel:(unsigned long long)arg1;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allSceneLabels;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;
- (id)_observationsForScene:(BOOL)arg1 sceneprint:(BOOL)arg2 aesthetics:(BOOL)arg3 saliencyHeatMap:(BOOL)arg4 of32BGRAImageInPixelBuffer:(struct __CVBuffer *)arg5 withOptions:(id)arg6 originalImageSize:(struct CGSize)arg7 regionOfInterest:(struct CGRect)arg8 warningRecorder:(id)arg9 error:(id *)arg10;
- (void)_addClassificationObservationsForSceneRequestRevisionNumber:(unsigned long long)arg1 toArray:(id)arg2 fromSceneLabelsAndConfidences:(const vector_a3c5a2fc *)arg3;

@end

