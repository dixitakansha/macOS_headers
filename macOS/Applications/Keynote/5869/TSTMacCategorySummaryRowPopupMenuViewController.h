//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"
#import "TSTTableControlCellViewController-Protocol.h"

@class NSMenu, NSString, TSTTableRep;

@interface TSTMacCategorySummaryRowPopupMenuViewController : NSObject <TSTTableControlCellViewController, NSMenuDelegate>
{
    TSTTableRep *mTableRep;
    struct TSUCellCoord mEditingCellID;
    NSMenu *mMenu;
    int mInteractionType;
}

@property(readonly, nonatomic) int interactionType; // @synthesize interactionType=mInteractionType;
- (void).cxx_destruct;
- (void)canvasDidZoom;
- (void)canvasWillZoom;
- (void)canvasDidEndScrolling;
- (void)canvasWillBeginScrolling;
- (void)dismiss;
- (void)updateValue;
- (void)updatePosition;
- (void)_buildMenuWithAggTypeSelected:(long long)arg1 forCellUID:(struct TSTCellUID)arg2 shouldDisplayLabel:(BOOL)arg3;
- (void)present;
- (unsigned char)p_currentAggregateType;
- (struct TSTCellUID)p_currentCellUID;
- (struct TSUCellRect)p_currentCellRange;
- (void)p_menuItemSelected:(id)arg1;
- (id)initWithTableRep:(id)arg1 cellID:(struct TSUCellCoord)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

