//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCardViewAnimationCoordinatorDelegate-Protocol.h"

@class FRMinimizedCardTopViewControllerTransitioningDelegate, FRNavigationController, UIPercentDrivenInteractiveTransition;

@interface FRMinimizedCardTopAnimationCoordinator : NSObject <TSCardViewAnimationCoordinatorDelegate>
{
    FRNavigationController *_navigationController;
    FRMinimizedCardTopViewControllerTransitioningDelegate *_transitioningDelegate;
    UIPercentDrivenInteractiveTransition *_interactionControllerForCurrentTransition;
    unsigned long long _presentationState;
}

@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactionControllerForCurrentTransition; // @synthesize interactionControllerForCurrentTransition=_interactionControllerForCurrentTransition;
@property(retain, nonatomic) FRMinimizedCardTopViewControllerTransitioningDelegate *transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(readonly, nonatomic) __weak FRNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)_finishCurrentInteractiveTransition;
- (void)_cancelCurrentInteractiveTransition;
- (double)_collapsedCardHeight;
- (void)_cardWillTransitionToNotCollapsed;
- (void)_cardWillTransitionToCollapsed;
- (void)_dismissMinimizedCardTopVisible;
- (void)_presentMinimizedCardTopVisible;
- (BOOL)_isMinimizedCardTopViewControllerPresented;
- (void)cardSplitViewPanableViewController:(id)arg1 didDragToLocation:(double)arg2;
- (void)cardSplitViewPanableViewController:(id)arg1 didTransitionToInteractiveState:(long long)arg2;
- (void)cardSplitViewPanableViewController:(id)arg1 didTransitionToPresentationState:(long long)arg2;
- (void)cardSplitViewPanableViewController:(id)arg1 willTransitionToPresentationState:(long long)arg2;
- (id)initWithNavigationController:(id)arg1;
- (id)init;

@end

