//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXNavigationParticipatingViewController.h"

@class NSLayoutConstraint, NSProgress, NSProgressIndicator, NSTextField;
@protocol IPXProjectExtensionTypeSelectionProgressDelegate;

@interface IPXProjectExtensionTypeSelectionProgressViewController : IPXNavigationParticipatingViewController
{
    BOOL _animateWindowSizeChange;
    NSProgress *_progress;
    id <IPXProjectExtensionTypeSelectionProgressDelegate> _delegate;
    CDUnknownBlockType _progressCompletionBlock;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressLabel;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak NSTextField *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy, nonatomic) CDUnknownBlockType progressCompletionBlock; // @synthesize progressCompletionBlock=_progressCompletionBlock;
@property(nonatomic) BOOL animateWindowSizeChange; // @synthesize animateWindowSizeChange=_animateWindowSizeChange;
@property(nonatomic) __weak id <IPXProjectExtensionTypeSelectionProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_progressObservationKeys;
- (void)_removeObserverForProgress:(id)arg1;
- (void)dealloc;
- (void)_callCompletion:(BOOL)arg1;
- (void)cancel;
- (void)_animateWindowToNewFittingSize;
- (void)didMoveToParentViewController:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (void)viewWillAppear;

@end

