//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlDirType.h"

@class MxlPosition;

@interface MxlDirTypeWedge : MxlDirType
{
    BOOL isCrescendo;
    BOOL isStart;
    MxlPosition *position;
}

@property(readonly) BOOL isStart; // @synthesize isStart;
@property(readonly) BOOL isCrescendo; // @synthesize isCrescendo;
- (id)description;
- (void)xmlDebugDirectionTypeElem:(id)arg1;
- (id)infoString;
- (void)xmlCreateDirectionTypeData:(id)arg1;
- (BOOL)placeAbove;
- (BOOL)needsStaff;
- (id)dirTypeName;
- (void)dealloc;
- (id)initWithWedge:(id)arg1 asStart:(BOOL)arg2;
- (id)init;

@end

