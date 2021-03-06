//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "NSImmediateActionGestureRecognizerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class ChatBuddyPicturesView, InstantMessage, MaskedView, NSArray, NSButton, NSLayoutConstraint, NSString, NSTextField, NSTimer, NSTrackingArea, NSView, SOChatDisplayController, SOStaticImageView, SOTypingIndicatorView;

@interface ChatTableCellView : NSTableCellView <NSImmediateActionGestureRecognizerDelegate, NSMenuDelegate>
{
    NSTrackingArea *_closeButtonTracking;
    NSTimer *_showButtonTimer;
    BOOL _selected;
    BOOL _dimmed;
    BOOL _isHoldingUpdates;
    NSArray *_observedParticipants;
    NSView *_contentsView;
    NSView *_chatInfoView;
    ChatBuddyPicturesView *_chatBuddyPicturesView;
    SOStaticImageView *_unreadIndicator;
    NSButton *_closeButton;
    NSTextField *_lastActivityDateTextField;
    MaskedView *_maskedView;
    NSTextField *_lastMessageTextField;
    SOTypingIndicatorView *_typingIndicator;
    NSLayoutConstraint *_chatInfoViewWidthConstraint;
    NSLayoutConstraint *_contentsViewTrailingConstraint;
    NSLayoutConstraint *_closeButtonVerticalAlignmentConstraint;
    NSLayoutConstraint *_chatTitleTrailingAnchor;
    NSLayoutConstraint *_typingIndicatorWidthConstraint;
    NSLayoutConstraint *_typingIndicatorHeightConstraint;
    NSLayoutConstraint *_typingIndicatorVerticalAlignmentConstraint;
    NSLayoutConstraint *_lastMessageTextFieldTopAlignmentConstraint;
    NSLayoutConstraint *_lastMessageTextFieldBottomAlignmentConstaint;
    InstantMessage *_typingIndicatorMessage;
}

+ (id)_lastMessageBaseSelectedAttributes;
+ (id)_lastMessageBaseAttributes;
+ (struct CGRect)_closeButtonMaskCenter;
+ (id)_closeButtonMask;
+ (double)_maskWidth;
@property(nonatomic) BOOL isHoldingUpdates; // @synthesize isHoldingUpdates=_isHoldingUpdates;
@property(retain, nonatomic) InstantMessage *typingIndicatorMessage; // @synthesize typingIndicatorMessage=_typingIndicatorMessage;
@property(nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(retain) NSLayoutConstraint *lastMessageTextFieldBottomAlignmentConstaint; // @synthesize lastMessageTextFieldBottomAlignmentConstaint=_lastMessageTextFieldBottomAlignmentConstaint;
@property(retain) NSLayoutConstraint *lastMessageTextFieldTopAlignmentConstraint; // @synthesize lastMessageTextFieldTopAlignmentConstraint=_lastMessageTextFieldTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *typingIndicatorVerticalAlignmentConstraint; // @synthesize typingIndicatorVerticalAlignmentConstraint=_typingIndicatorVerticalAlignmentConstraint;
@property(retain) NSLayoutConstraint *typingIndicatorHeightConstraint; // @synthesize typingIndicatorHeightConstraint=_typingIndicatorHeightConstraint;
@property(retain) NSLayoutConstraint *typingIndicatorWidthConstraint; // @synthesize typingIndicatorWidthConstraint=_typingIndicatorWidthConstraint;
@property(retain) NSLayoutConstraint *chatTitleTrailingAnchor; // @synthesize chatTitleTrailingAnchor=_chatTitleTrailingAnchor;
@property(retain) NSLayoutConstraint *closeButtonVerticalAlignmentConstraint; // @synthesize closeButtonVerticalAlignmentConstraint=_closeButtonVerticalAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentsViewTrailingConstraint; // @synthesize contentsViewTrailingConstraint=_contentsViewTrailingConstraint;
@property(retain) NSLayoutConstraint *chatInfoViewWidthConstraint; // @synthesize chatInfoViewWidthConstraint=_chatInfoViewWidthConstraint;
@property(retain) SOTypingIndicatorView *typingIndicator; // @synthesize typingIndicator=_typingIndicator;
@property(retain) NSTextField *lastMessageTextField; // @synthesize lastMessageTextField=_lastMessageTextField;
@property(retain) MaskedView *maskedView; // @synthesize maskedView=_maskedView;
@property(retain) NSTextField *lastActivityDateTextField; // @synthesize lastActivityDateTextField=_lastActivityDateTextField;
@property(retain) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain) SOStaticImageView *unreadIndicator; // @synthesize unreadIndicator=_unreadIndicator;
@property(retain) ChatBuddyPicturesView *chatBuddyPicturesView; // @synthesize chatBuddyPicturesView=_chatBuddyPicturesView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain) NSView *chatInfoView; // @synthesize chatInfoView=_chatInfoView;
@property(retain) NSView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) NSArray *observedParticipants; // @synthesize observedParticipants=_observedParticipants;
- (void).cxx_destruct;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)_sendingAccountDidChange:(id)arg1;
- (void)_showCloseButtonTimerFired:(id)arg1;
- (void)_updateCloseButtonVerticalAlignmentConstraint;
- (void)delayedShowCloseButton;
- (BOOL)_chatHasUnreadMessages;
- (void)_updateAll;
- (void)_updateTypingIndicator;
- (void)_updateToolTip;
- (void)_updateDimming;
- (void)_updateParticipants;
- (void)_updateLastMessageDateTime;
- (void)_updateSummary;
- (void)_summaryChanged:(id)arg1;
- (void)_updateChatTitle;
- (void)_updateBuddyPicture;
- (void)_updateChatUnreadIndicator;
- (void)_chatShouldDisplayMessageContents:(id)arg1;
- (void)_participantInfoChanged:(id)arg1;
- (void)_personChanged:(id)arg1;
- (void)_participantMonogramChanged:(id)arg1;
- (void)_participantBuddyPictureChanged:(id)arg1;
- (void)_participantsChanged:(id)arg1;
- (void)_chatControllerWillUnregister:(id)arg1;
- (void)_recentParticipantsChanged:(id)arg1;
- (void)_participantStateChanged:(id)arg1;
- (void)_dateTimeFormatChanged:(id)arg1;
- (void)_chatOverallStatusChanged:(id)arg1;
- (void)_chatControllerShouldDisplayTypingIndicatorDidChange:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (void)_chatControllerDisplayNameChanged:(id)arg1;
- (void)_chatUnreadCountChanged:(id)arg1;
- (void)_lastDateDidChange:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewDidMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)arg1;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (void)dealloc;
- (void)_anonimizeWindowChanged:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonChatTableCellViewInit;
- (void)_updateBuddyPictureVibrancy;
- (void)_popoverDidClose:(id)arg1;
- (void)_updateTypingIndicatorView;
- (void)closeTab:(id)arg1;
- (id)draggingImageComponents;
@property(readonly, nonatomic) BOOL shouldUseSelectedTextFormat; // @dynamic shouldUseSelectedTextFormat;
@property BOOL showsLastActivityDate; // @dynamic showsLastActivityDate;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
@property(nonatomic, getter=isCompact) BOOL compact; // @dynamic compact;
@property(nonatomic) BOOL showsCloseButton; // @dynamic showsCloseButton;
@property(readonly) SOChatDisplayController *chatDisplayController; // @dynamic chatDisplayController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

