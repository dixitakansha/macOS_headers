//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "FRAppActivityObserving-Protocol.h"
#import "FREditorialViewControllerDelegate-Protocol.h"
#import "FREmailSignUpAppearanceManagerDelegate-Protocol.h"
#import "FREmailSignUpViewControllerDelegate-Protocol.h"
#import "FRStoryboardRestorableViewController-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class FREditorialViewController, FREmailSignUpAppearanceManager, FRFavoritesPickerLauncher, FRFeedCollectionViewController, FRFeedViewContext, FRTrendingTopicsViewController, NSDate, NSMutableArray, NSString, UIViewController;
@protocol FRFeldsparContext;

@interface FRTabBarController : UITabBarController <UITabBarControllerDelegate, FREditorialViewControllerDelegate, FREmailSignUpAppearanceManagerDelegate, FREmailSignUpViewControllerDelegate, FRAppActivityObserving, FRStoryboardRestorableViewController>
{
    id <FRFeldsparContext> _feldsparContext;
    UIViewController *_subscriptionsViewController;
    UIViewController *_savedViewController;
    FRFavoritesPickerLauncher *_feedPickerViewController;
    UIViewController *_forYouViewController;
    UIViewController *_editorialViewController;
    UIViewController *_searchViewController;
    UIViewController *_previouslySelectedViewController;
    FREditorialViewController *_editorialContentViewController;
    FRTrendingTopicsViewController *_rootSearchViewController;
    FREmailSignUpAppearanceManager *_emailSignUpAppearanceManager;
    NSMutableArray *_viewDidLoadBlocks;
    NSDate *_emailSignUpPresentationStartDate;
    FRFeedViewContext *_forYouFeedViewContext;
}

+ (id)storyboardIdentifier;
@property(retain, nonatomic) FRFeedViewContext *forYouFeedViewContext; // @synthesize forYouFeedViewContext=_forYouFeedViewContext;
@property(copy, nonatomic) NSDate *emailSignUpPresentationStartDate; // @synthesize emailSignUpPresentationStartDate=_emailSignUpPresentationStartDate;
@property(retain, nonatomic) NSMutableArray *viewDidLoadBlocks; // @synthesize viewDidLoadBlocks=_viewDidLoadBlocks;
@property(retain, nonatomic) FREmailSignUpAppearanceManager *emailSignUpAppearanceManager; // @synthesize emailSignUpAppearanceManager=_emailSignUpAppearanceManager;
@property(nonatomic) __weak FRTrendingTopicsViewController *rootSearchViewController; // @synthesize rootSearchViewController=_rootSearchViewController;
@property(nonatomic) __weak FREditorialViewController *editorialContentViewController; // @synthesize editorialContentViewController=_editorialContentViewController;
@property(nonatomic) __weak UIViewController *previouslySelectedViewController; // @synthesize previouslySelectedViewController=_previouslySelectedViewController;
@property(retain, nonatomic) UIViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) UIViewController *editorialViewController; // @synthesize editorialViewController=_editorialViewController;
@property(retain, nonatomic) UIViewController *forYouViewController; // @synthesize forYouViewController=_forYouViewController;
@property(retain, nonatomic) FRFavoritesPickerLauncher *feedPickerViewController; // @synthesize feedPickerViewController=_feedPickerViewController;
@property(readonly, nonatomic) UIViewController *savedViewController; // @synthesize savedViewController=_savedViewController;
@property(retain, nonatomic) UIViewController *subscriptionsViewController; // @synthesize subscriptionsViewController=_subscriptionsViewController;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)performIfViewIsLoaded:(CDUnknownBlockType)arg1;
- (void)switchToTabFromKeyCommand:(id)arg1;
- (void)searchKeyCommand:(id)arg1;
- (id)keyCommands;
- (BOOL)canBecomeFirstResponder;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)activityObservingApplicationWillEnterForeground;
- (void)_registerForEmails;
- (void)emailSignUpViewControllerNotNowButtonTapped:(id)arg1;
- (void)emailSignUpViewControllerSignUpButtonTapped:(id)arg1;
- (void)emailSignUpAppearanceManagerPresentEmailSignUpScreen:(id)arg1;
- (void)editorialViewControllerViewDidDisappear:(id)arg1;
- (void)editorialViewController:(id)arg1 updateTabWithTabName:(id)arg2 tabIcon:(id)arg3 showBadge:(BOOL)arg4;
- (void)showSubscriptionsDetectionScreenIfNeeded;
- (void)showFavoritesPickerWithPresentingViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_checkTabBarLaunchedWithForYouTabAsSelected;
- (void)setupAppLaunchCounting;
- (void)_purchaseListDidChange;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)_performDoubleTapActionForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) FRFeedCollectionViewController *forYouCollectionViewController;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (void)removeEditorialTabBadge;
- (id)editorialTabName;
- (BOOL)isEditorialTabShowingBadge;
- (id)editorialArticle;
- (void)scrollEditorialToFragment:(id)arg1;
- (void)switchToHistorySegment;
- (void)switchToSavedSegment;
- (void)navigateToTabWithIndex:(long long)arg1 referral:(id)arg2 articleContext:(id)arg3;
- (void)setBadgeValueForSavedTab:(id)arg1;
- (void)setBadgeValueForEditorialTab:(id)arg1;
- (void)setBadgeValueForFavoriteTab:(id)arg1;
- (void)_setEditorialTabBadgeTextAttributes;
- (void)searchForString:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupWithFeldsparContext:(id)arg1 activityMonitor:(id)arg2 forYouFeedViewContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

