//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIVector, NSColor, NSSet, NSString;

@interface FLUUploadDocumentItem : NSObject
{
    NSString *_mediaFilePath;
    unsigned long long _mediaType;
    NSSet *_tags;
    NSString *_filterName;
    double _filterIntensity;
    double _adjustmentStraightenInputAngle;
    double _adjustmentBrightnessInput;
    double _adjustmentContrastInput;
    double _adjustmentStructureInputNoise;
    double _adjustmentStructureInputSharpness;
    double _adjustmentWarmthInputTargetNeutral;
    double _adjustmentSaturationInput;
    double _adjustmentColorIntensity;
    NSColor *_adjustmentColorInput;
    double _adjustmentFadeInputPower;
    double _adjustmentHighlightInputAmount;
    double _adjustmentShadowInputAmount;
    double _adjustmentVignetteIntensity;
    double _adjustmentTiltShiftRadius;
    CIVector *_adjustmentTiltShiftPoint0;
    CIVector *_adjustmentTiltShiftPoint1;
    double _adjustmentSharpnessInput;
    double _adjustmentScaleInput;
    NSColor *_adjustmentScaleBackgroundColorInput;
    CDStruct_1b6d18a9 _coverImageTime;
    struct CGRect _croppingRect;
}

@property(retain, nonatomic) NSColor *adjustmentScaleBackgroundColorInput; // @synthesize adjustmentScaleBackgroundColorInput=_adjustmentScaleBackgroundColorInput;
@property(nonatomic) double adjustmentScaleInput; // @synthesize adjustmentScaleInput=_adjustmentScaleInput;
@property(nonatomic) double adjustmentSharpnessInput; // @synthesize adjustmentSharpnessInput=_adjustmentSharpnessInput;
@property(retain, nonatomic) CIVector *adjustmentTiltShiftPoint1; // @synthesize adjustmentTiltShiftPoint1=_adjustmentTiltShiftPoint1;
@property(retain, nonatomic) CIVector *adjustmentTiltShiftPoint0; // @synthesize adjustmentTiltShiftPoint0=_adjustmentTiltShiftPoint0;
@property(nonatomic) double adjustmentTiltShiftRadius; // @synthesize adjustmentTiltShiftRadius=_adjustmentTiltShiftRadius;
@property(nonatomic) double adjustmentVignetteIntensity; // @synthesize adjustmentVignetteIntensity=_adjustmentVignetteIntensity;
@property(nonatomic) double adjustmentShadowInputAmount; // @synthesize adjustmentShadowInputAmount=_adjustmentShadowInputAmount;
@property(nonatomic) double adjustmentHighlightInputAmount; // @synthesize adjustmentHighlightInputAmount=_adjustmentHighlightInputAmount;
@property(nonatomic) double adjustmentFadeInputPower; // @synthesize adjustmentFadeInputPower=_adjustmentFadeInputPower;
@property(retain, nonatomic) NSColor *adjustmentColorInput; // @synthesize adjustmentColorInput=_adjustmentColorInput;
@property(nonatomic) double adjustmentColorIntensity; // @synthesize adjustmentColorIntensity=_adjustmentColorIntensity;
@property(nonatomic) double adjustmentSaturationInput; // @synthesize adjustmentSaturationInput=_adjustmentSaturationInput;
@property(nonatomic) double adjustmentWarmthInputTargetNeutral; // @synthesize adjustmentWarmthInputTargetNeutral=_adjustmentWarmthInputTargetNeutral;
@property(nonatomic) double adjustmentStructureInputSharpness; // @synthesize adjustmentStructureInputSharpness=_adjustmentStructureInputSharpness;
@property(nonatomic) double adjustmentStructureInputNoise; // @synthesize adjustmentStructureInputNoise=_adjustmentStructureInputNoise;
@property(nonatomic) double adjustmentContrastInput; // @synthesize adjustmentContrastInput=_adjustmentContrastInput;
@property(nonatomic) double adjustmentBrightnessInput; // @synthesize adjustmentBrightnessInput=_adjustmentBrightnessInput;
@property(nonatomic) double adjustmentStraightenInputAngle; // @synthesize adjustmentStraightenInputAngle=_adjustmentStraightenInputAngle;
@property(nonatomic) double filterIntensity; // @synthesize filterIntensity=_filterIntensity;
@property(retain, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(nonatomic) struct CGRect croppingRect; // @synthesize croppingRect=_croppingRect;
@property(nonatomic) CDStruct_1b6d18a9 coverImageTime; // @synthesize coverImageTime=_coverImageTime;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *mediaFilePath; // @synthesize mediaFilePath=_mediaFilePath;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

