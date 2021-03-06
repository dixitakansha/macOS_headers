//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSSplitViewDelegate-Protocol.h"
#import "SearchControllerObserver-Protocol.h"

@class AnimatedImageView, BackgroundView, ChatCollectionView, CollapsibleSplitView, DCCollectionView, MessagesSearchChatCollectionViewController, MessagesSearchResultItem, NSArrayController, NSButton, NSMenu, NSString, NSTextField;

@interface MessagesSearchResultsViewController : NSViewController <NSSplitViewDelegate, SearchControllerObserver>
{
    NSArrayController *_resultsArrayController;
    CollapsibleSplitView *_splitView;
    DCCollectionView *_conversationsCollectionView;
    MessagesSearchChatCollectionViewController *_messagesCollectionViewController;
    BackgroundView *_noMessagesBackgroundView;
    BackgroundView *_messagesBackgroundView;
    ChatCollectionView *_messagesCollectionView;
    AnimatedImageView *_loadingSpinner;
    NSMenu *_messagesContextMenu;
    NSTextField *_noMessagesTextField;
    NSButton *_noMessagesButton;
    NSString *_query;
    BOOL _observingObjects;
    MessagesSearchResultItem *_selectedConversationResult;
}

+ (id)keyPathsForValuesAffectingViewConversationButtonHidden;
+ (id)keyPathsForValuesAffectingMessagesTabViewSelectedIndex;
+ (id)keyPathsForValuesAffectingNoMessagesDescription;
+ (void)initialize;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) MessagesSearchResultItem *selectedConversationResult; // @synthesize selectedConversationResult=_selectedConversationResult;
@property(nonatomic) __weak NSTextField *noMessagesTextField; // @synthesize noMessagesTextField=_noMessagesTextField;
@property(nonatomic) __weak NSButton *noMessagesButton; // @synthesize noMessagesButton=_noMessagesButton;
@property(nonatomic) __weak BackgroundView *noMessagesBackgroundView; // @synthesize noMessagesBackgroundView=_noMessagesBackgroundView;
@property(nonatomic) __weak BackgroundView *messagesBackgroundView; // @synthesize messagesBackgroundView=_messagesBackgroundView;
@property(nonatomic) __weak NSMenu *messagesContextMenu; // @synthesize messagesContextMenu=_messagesContextMenu;
@property(retain, nonatomic) MessagesSearchChatCollectionViewController *messagesCollectionViewController; // @synthesize messagesCollectionViewController=_messagesCollectionViewController;
@property(nonatomic) __weak DCCollectionView *conversationsCollectionView; // @synthesize conversationsCollectionView=_conversationsCollectionView;
@property(nonatomic) __weak CollapsibleSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak NSArrayController *resultsArrayController; // @synthesize resultsArrayController=_resultsArrayController;
@property(nonatomic) __weak ChatCollectionView *messagesCollectionView; // @synthesize messagesCollectionView=_messagesCollectionView;
@property(nonatomic) __weak AnimatedImageView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingObjects;
- (void)_startObservingObjects;
- (void)searchController:(id)arg1 didFinishForResultsKind:(unsigned long long)arg2;
- (void)searchController:(id)arg1 didChangeResults:(id)arg2 forResultsKind:(unsigned long long)arg3;
- (void)searchController:(id)arg1 didChangeQuery:(id)arg2;
@property(readonly, nonatomic, getter=isViewConversationButtonHidden) BOOL viewConversationButtonHidden;
@property(readonly, nonatomic) unsigned long long messagesTabViewSelectedIndex;
@property(readonly, nonatomic) NSString *noMessagesDescription;
- (void)makeTextStandardSize:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextLarger:(id)arg1;
- (void)viewMessage:(id)arg1;
- (void)viewConversation:(id)arg1;
- (void)_updateFindPasteboard;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
@property(readonly, nonatomic) double leftViewMaxWidth;
@property(readonly, nonatomic) double leftViewMinWidth;
- (void)_setUpCollectionViews;
- (void)_setUpTabView;
- (void)_setUpSplitView;
- (void)_setUpArrayController;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

