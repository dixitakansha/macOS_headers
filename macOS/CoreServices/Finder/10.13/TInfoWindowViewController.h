//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBaseInfoWindowViewController.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, NSView, TLayoutBinder;

@interface TInfoWindowViewController : TBaseInfoWindowViewController <CAAnimationDelegate>
{
    double _expandedHeight;
    NSView *_bottomBindingView;
    _Bool _expanded;
    _Bool _prefExpanded;
    _Bool _isSetFrameHeightInProgress;
    _Bool _isToggleInProgress;
    struct TNSRef<TLayoutBinder *, void> _layoutBinder;
    struct TNSRef<TLayoutBinder *, void> _separatorLayoutBinder;
    struct TNotificationCenterObserver _bottomBindingViewFrameChangedObserver;
}

@property(readonly, nonatomic) _Bool isToggleInProgress; // @synthesize isToggleInProgress=_isToggleInProgress;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disableBottomViewBindings;
- (void)enableBottomViewBindings;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)nodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)bulkNodesDeleted:(const struct TCoalescedNodesAddedMap *)arg1;
- (void)bulkNodesChanged:(const struct TCoalescedNodesChangedMap *)arg1;
@property(nonatomic) _Bool prefExpanded; // @synthesize prefExpanded=_prefExpanded;
- (id)expandedPrefKey;
- (_Bool)expandedDefaultValue;
- (double)disclosedHeight;
@property(readonly, nonatomic) double bottomMargin;
- (void)targetNodesChanged;
- (void)setTargetNodes:(const struct TFENodeVector *)arg1;
- (void)targetNodesChanging;
- (void)setFrameHeight:(double)arg1;
- (void)bottomBindingViewFrameChanged;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)toggleExpanded:(id)arg1;
- (unsigned int)scriptingID;
- (void)setSubviewsHidden:(_Bool)arg1;
- (void)postToggle;
- (void)preToggle;
@property(readonly, retain, nonatomic) TLayoutBinder *layoutBinder; // @dynamic layoutBinder;
- (void)aboutToTearDown;
- (void)viewLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

