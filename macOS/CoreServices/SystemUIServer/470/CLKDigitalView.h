//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLKView.h"

@class NSDateFormatter;

@interface CLKDigitalView : CLKView
{
    BOOL showSeconds;
    BOOL flashDateSeparators;
    NSDateFormatter *formatter;
    long long _hourValueForLastWidthCalculation;
    long long _minValueForLastWidthCalculation;
}

- (id)AXValue;
- (BOOL)_dateFormatContains:(id)arg1;
- (void)invalidateClockWidthCache;
- (void)update;
- (void)_updateWithDate:(id)arg1;
- (struct CGRect)cellFrame;
- (BOOL)_resize;
- (void)setFrameOriginYOffset:(float)arg1;
- (void)setShowSeconds:(BOOL)arg1;
- (BOOL)showSeconds;
- (void)setFlashDateSeparators:(BOOL)arg1;
- (BOOL)flashDateSeparators;
- (void)setDateFormat:(id)arg1;
- (id)dateFormat;
- (id)dateFormatWithoutTime;
- (float)widthOfWidestTime;
- (void)_setUpdateTimeInterval;
- (id)updatedFont:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

