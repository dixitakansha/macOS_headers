//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgFrameWindow.h"

#import "FBScrubberLayoutDelegate-Protocol.h"
#import "FBSmartControlsAssistantDelegate-Protocol.h"
#import "NSScrubberDataSource-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class FBSmartControlsAssistant, MAHUDWindowFrame, NSCustomTouchBarItem, NSImage, NSMutableArray, NSMutableDictionary, NSObject, NSPopoverTouchBarItem, NSString, NSTouchBar;
@protocol MALastClickedParameterHandler;

@interface CLgDocwPanel : CLgFrameWindow <NSTouchBarDelegate, NSScrubberDataSource, FBScrubberLayoutDelegate, FBSmartControlsAssistantDelegate>
{
    int mDocwType;
    BOOL mPreserveHeight;
    BOOL mPreserveWidth;
    BOOL mIgnorePreserveSize;
    BOOL mIsMatteAndNotRaised;
    BOOL mIsFullScreen;
    BOOL mBehavesLikeWindow;
    MAHUDWindowFrame *mHUDFrame;
    NSObject<MALastClickedParameterHandler> *_lastClickedParameterHandler;
}

+ (struct CGRect)windowContentRectForFrameRect:(struct CGRect)arg1 isFloatWindow:(BOOL)arg2 matteAndNotRaised:(BOOL)arg3 hasCloseBox:(BOOL)arg4 isResizable:(BOOL)arg5 isMiniaturizable:(BOOL)arg6 isHud:(BOOL)arg7 isUtility:(BOOL)arg8;
+ (struct CGRect)windowFrameRectForContentRect:(struct CGRect)arg1 isFloatWindow:(BOOL)arg2 matteAndNotRaised:(BOOL)arg3 hasCloseBox:(BOOL)arg4 isResizable:(BOOL)arg5 isMiniaturizable:(BOOL)arg6 isHud:(BOOL)arg7 isUtility:(BOOL)arg8;
+ (unsigned long long)windowStyleMask_isFloatWindow:(BOOL)arg1 matteAndNotRaised:(BOOL)arg2 hasCloseBox:(BOOL)arg3 isResizable:(BOOL)arg4 isMiniaturizable:(BOOL)arg5 isHud:(BOOL)arg6 isUtility:(BOOL)arg7;
- (void)setLastClickedParameterHandler:(id)arg1;
- (id)lastClickedParameterHandler;
- (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
- (void)handleHUDFrameCloseAction:(id)arg1;
- (void)updateWindowTitleTileNumberOfRows:(unsigned long long)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)resetNextKeyViews;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)docwWindowSetFrame:(struct CGRect *)arg1 display:(char *)arg2;
- (struct CGSize)minSize;
- (struct CGSize)correctProposedSize:(struct CGSize)arg1;
- (int)docwType;
- (void)setDocwType:(int)arg1;
- (void)setIgnorePreserveWidthAndHeight:(BOOL)arg1;
- (void)setPreserveWidth:(BOOL)arg1 andHeight:(BOOL)arg2;
- (int)frameWindowType;
- (void)close;
- (void)toggleToolbarShown:(id)arg1;
- (BOOL)matteAndNotRaised;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isHUDWindow;
@property(readonly, nonatomic) BOOL isFullScreen;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)canBecomeMainWindow;
- (void)dealloc;
- (id)initAsWindow:(BOOL)arg1 frameRect:(struct CGRect)arg2 isFloatWindow:(BOOL)arg3 hasBigTitlebar:(BOOL)arg4 matteAndNotRaised:(BOOL)arg5 hasCloseBox:(BOOL)arg6 isResizable:(BOOL)arg7 isMiniaturizable:(BOOL)arg8 isHud:(BOOL)arg9 isUtility:(BOOL)arg10 screen:(id)arg11 isOpeningScreenset:(BOOL)arg12 fullScreen:(BOOL)arg13;
@property(readonly) FBSmartControlsAssistant *smartControlsAssistant;
- (id)makeTouchBar;
- (void)assistant:(id)arg1 didUpdateObjectWithIdentity:(id)arg2 doubleValue:(double)arg3;
- (void)assistantWorkspaceDidUpdate:(id)arg1;
- (double)scrubber:(id)arg1 layout:(id)arg2 spaceBeforeItemAtIndex:(long long)arg3;
- (struct CGSize)scrubber:(id)arg1 layout:(id)arg2 sizeForItemAtIndex:(long long)arg3;
- (void)scrubber:(id)arg1 didHighlightItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)updateSmartControlRepresentations;
@property BOOL showTransformPadInsteadOfSmartControls;
@property(readonly) NSPopoverTouchBarItem *trackLevelItem;
@property(readonly) NSPopoverTouchBarItem *smartControlsItem;
@property(readonly) NSCustomTouchBarItem *transformPadItem;
@property(readonly) NSCustomTouchBarItem *nullSpaceItem;
@property(retain) NSMutableDictionary *scrubberItemsCache;
@property(retain) NSMutableArray *smartControlItemRepresentations;
@property(readonly) NSTouchBar *mainTouchBar;
@property(retain) NSImage *navigationSwitchImage;
@property(retain) NSImage *controlsSwitchImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

