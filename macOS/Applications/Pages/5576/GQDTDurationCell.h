//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDTCell.h"

#import "ICExportable-Protocol.h"

@class GQDTComputedFormatSpec, NSString;

@interface GQDTDurationCell : GQDTCell <ICExportable>
{
    double mValue;
    GQDTComputedFormatSpec *mComputedFormat;
    struct __CFBundle *mProcessorBundle;
}

+ (unsigned char)defaultFlags;
- (BOOL)isEqualToDurationCell:(id)arg1;
- (id)computedFormat;
- (double)durationValue;
- (struct __CFString *)copyStringValue;
- (void)dealloc;
- (void)setProcessorBundle:(struct __CFBundle *)arg1;
- (int)readAttributesForDurationCell:(struct _xmlTextReader *)arg1;
- (void)setComputedFormat:(id)arg1;
- (void)setValue:(double)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

