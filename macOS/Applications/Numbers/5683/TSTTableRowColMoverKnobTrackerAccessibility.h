//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSTTableRowColMoverKnobTrackerAccessibility_super.h"

#import "TSTTableRowColMoverKnobTrackerAccessibilityExtras-Protocol.h"

@class NSString, TSAccessibilityTimer, TSTTableRepAccessibility;

@interface TSTTableRowColMoverKnobTrackerAccessibility : __TSTTableRowColMoverKnobTrackerAccessibility_super <TSTTableRowColMoverKnobTrackerAccessibilityExtras>
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (void)endMovingKnob;
- (void)beginMovingKnob;
- (struct TSUCellCoord)_tsaxModelColumnOrRowCellIDForLayoutCellID:(struct TSUCellCoord)arg1 inDirection:(long long)arg2;
- (void)_tsaxHandlePostingAnnouncement:(id)arg1 forEvent:(int)arg2;
@property(retain, nonatomic, setter=_tsaxSetDelayedAnnouncementTimer:) TSAccessibilityTimer *_tsaxDelayedAnnouncementTimer;
@property(readonly, nonatomic) struct TSUCellRect tsaxTargetCurrentCellRange;
@property(readonly, nonatomic) struct TSUCellRect tsaxTargetCellRange;
@property(readonly, nonatomic) long long tsaxDirection;
@property(readonly, nonatomic) TSTTableRepAccessibility *tsaxTableRep;
- (id)tsaxTarget;
- (BOOL)accessibilityIsIgnored;
- (double)tsaxDelayForPostingAnnouncementForEvent:(int)arg1;
- (int)tsaxAnnouncementPriorityForEvent:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

