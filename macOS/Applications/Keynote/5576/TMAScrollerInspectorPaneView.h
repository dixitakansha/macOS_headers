//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKMacScrollView.h"

@class NSLayoutConstraint, NSView;

@interface TMAScrollerInspectorPaneView : TSKMacScrollView
{
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_topConstraint;
    NSView *_topUnderscrollShadowView;
    NSView *_paneView;
}

@property(retain, nonatomic) NSView *paneView; // @synthesize paneView=_paneView;
- (void).cxx_destruct;
- (void)setupTopShadow;
- (void)tile;
- (void)p_clipViewBoundsDidChange:(id)arg1;
- (void)p_commonInit;
- (void)p_updateContentConstraints;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)updateConstraints;
- (void)tma_updateInspectorPaneHeightWithAnimation:(BOOL)arg1;
- (BOOL)tma_inspectorPaneHeightIsFlexible;
- (double)tma_inspectorPaneHeight;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

