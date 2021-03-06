//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTCellSpec.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSTCellRangeControlSpec : TSTCellSpec <GSSPAutoEncodable>
{
    int _interactionType;
    int _legacyDisplayFormatType;
    double _minimum;
    double _maximum;
    double _increment;
}

+ (id)instanceWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)sliderSpecWithMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3;
+ (id)stepperSpecWithMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3;
+ (id)defaultRangeControlSpecOfType:(int)arg1;
+ (double)defaultCellValueForInteractionType:(int)arg1;
+ (BOOL)legalRangeControlMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3;
@property(readonly, nonatomic) int legacyDisplayFormatType; // @synthesize legacyDisplayFormatType=_legacyDisplayFormatType;
@property(readonly, nonatomic) double increment; // @synthesize increment=_increment;
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (int)interactionType;
- (void)saveToArchive:(struct CellSpecArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (id)tskStepperSliderFormatWithDisplayFormatType:(int)arg1;
- (BOOL)validateFormatAndValue:(id)arg1;
- (double)valueFromString:(id)arg1 locale:(id)arg2;
- (double)recomputedValueFromValue:(double)arg1 changed:(char *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)asRangeControlSpec;
- (id)initWithInteractionType:(int)arg1 minimum:(double)arg2 maximum:(double)arg3 increment:(double)arg4;
- (void)populateGSSPCellRangeControlSpec:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

