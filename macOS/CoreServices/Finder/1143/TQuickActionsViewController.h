//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class NSBox, NSLayoutConstraint, NSStackView, TQuickActionButton;

@interface TQuickActionsViewController : TViewController
{
    struct TNSRef<NSArray<TQuickAction *>, void> _currentServices;
    struct TNSRef<TQuickActionButton, void> _moreButton;
    struct TNSRef<NSLayoutConstraint, void> _moreButtonWidthConstraint;
    NSStackView *_stackView;
    NSLayoutConstraint *_heightConstraint;
    NSBox *_magicPocketLine;
    _Bool _needsRepopulation;
    struct TNotificationCenterObserver _availableQuickActionsObserver;
    NSLayoutConstraint *_baseConstraint;
    struct TNotificationCenterObserver _legacyScrollersDidChangeObserver;
    _Bool _inColumnView;
    struct TFENodeVector _nodes;
}

@property(nonatomic) _Bool inColumnView; // @synthesize inColumnView=_inColumnView;
@property(nonatomic) struct TFENodeVector nodes; // @synthesize nodes=_nodes;
@property(readonly, retain, nonatomic) NSBox *magicPocketLine; // @synthesize magicPocketLine=_magicPocketLine;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)quickActionsDidChange;
- (void)removeAnimated:(_Bool)arg1 withLayoutGuide:(id)arg2;
- (void)presentAnimated:(_Bool)arg1 inContainer:(id)arg2 withLayoutGuide:(id)arg3;
@property(readonly, nonatomic) _Bool isVisible; // @dynamic isVisible;
- (void)updateSizeForScrollerStyle;
- (void)presentMoreMenu:(id)arg1;
@property(readonly, nonatomic) TQuickActionButton *moreButton;
- (void)populateActionButtons;
- (id)newActionButton;
- (void)updateActions;
- (void)viewWillLayout;
@property(readonly, nonatomic) double height; // @dynamic height;
- (id)nibName;
- (void)aboutToTearDown;
- (void)viewLoaded;

@end

