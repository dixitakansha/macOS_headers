//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAWorkspace/MAWorkspaceHolderView.h>

#import "LgSectionView-Protocol.h"

@class CLgView, CLgWorkspaceFreezeView, MAButton, NSAttributedString, NSImage, NSShadow, NSView, SmartControlsViewController;

@interface CLgWorkspaceHolderView : MAWorkspaceHolderView <LgSectionView>
{
    CLgView *parentView;
    NSView *scaleableView;
    BOOL showsVisualEQ;
    SmartControlsViewController *scvc;
    NSImage *bgImage;
    NSImage *tolexImage;
    NSShadow *dropShadow;
    NSAttributedString *noPluginsText;
    NSAttributedString *addEQText;
    BOOL showPlaceholderText;
    MAButton *addEQButton;
    CLgWorkspaceFreezeView *freezeView;
    BOOL _userInputDisabled;
    NSAttributedString *unsupportedTrack;
    id userInputDisabledTarget;
    SEL userInputDisabledAction;
}

@property(readonly) BOOL showsVisualEQ; // @synthesize showsVisualEQ;
@property(nonatomic) SEL userInputDisabledAction; // @synthesize userInputDisabledAction;
@property(nonatomic) id userInputDisabledTarget; // @synthesize userInputDisabledTarget;
@property CLgView *parentView; // @synthesize parentView;
@property(retain, nonatomic) NSAttributedString *unsupportedTrack; // @synthesize unsupportedTrack;
- (void)conditionallyShowWorkspace;
- (BOOL)toggleVisualEQ;
@property BOOL displayTolex;
- (void)setVisualEQView:(id)arg1;
- (BOOL)hasVisualEQView;
- (void)centerAndScaleEQ;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateFreezeView;
@property(nonatomic) BOOL userInputDisabled; // @synthesize userInputDisabled=_userInputDisabled;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (void)setHideWorkspaceView:(BOOL)arg1 force:(BOOL)arg2;
- (BOOL)acceptsFirstResponder;
- (BOOL)hasPlayhead;
- (BOOL)isContents;
@property(readonly) int section;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scViewController:(id)arg2;

@end

