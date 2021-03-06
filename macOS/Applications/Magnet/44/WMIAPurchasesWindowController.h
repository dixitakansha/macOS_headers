//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "WMIAPurchasesControllerDelegate-Protocol.h"

@class NSBox, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSTimer, WMCursorButton, WMIAPBuyButton, WMIAPurchasesController, WMTrialController;

@interface WMIAPurchasesWindowController : NSWindowController <WMIAPurchasesControllerDelegate>
{
    BOOL _displayCountdown;
    BOOL _productFetched;
    WMTrialController *_trialController;
    WMIAPurchasesController *_controller;
    NSTimer *_updateTimer;
    NSTextField *_titleTextField;
    NSTextField *_messageTextField;
    NSProgressIndicator *_progressIndicator;
    WMIAPBuyButton *_buyButton;
    NSBox *_horizontalLine;
    NSTextField *_purchasingMessageTextField;
    NSProgressIndicator *_purchasingProgressIndicator;
    WMCursorButton *_restoreButton;
    NSTextField *_infoIcon;
    NSLayoutConstraint *_messageTextFieldTopConstraint;
}

@property BOOL productFetched; // @synthesize productFetched=_productFetched;
@property(retain) NSLayoutConstraint *messageTextFieldTopConstraint; // @synthesize messageTextFieldTopConstraint=_messageTextFieldTopConstraint;
@property(retain) NSTextField *infoIcon; // @synthesize infoIcon=_infoIcon;
@property(retain) WMCursorButton *restoreButton; // @synthesize restoreButton=_restoreButton;
@property(retain) NSProgressIndicator *purchasingProgressIndicator; // @synthesize purchasingProgressIndicator=_purchasingProgressIndicator;
@property(retain) NSTextField *purchasingMessageTextField; // @synthesize purchasingMessageTextField=_purchasingMessageTextField;
@property(retain) NSBox *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain) WMIAPBuyButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(retain) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) WMIAPurchasesController *controller; // @synthesize controller=_controller;
@property BOOL displayCountdown; // @synthesize displayCountdown=_displayCountdown;
@property(retain) WMTrialController *trialController; // @synthesize trialController=_trialController;
- (void).cxx_destruct;
- (void)iapController:(id)arg1 updatedStatus:(unsigned long long)arg2;
- (void)iapController:(id)arg1 fetched:(id)arg2;
- (void)configureForStatus:(unsigned long long)arg1;
- (void)setButtonTitleForPrice:(id)arg1 locale:(id)arg2;
- (void)configureBuyButton;
- (void)configureRestoreButton;
- (void)setPurchasingProgressIndicatorVisible:(BOOL)arg1;
- (void)setProgressIndicatorVisible:(BOOL)arg1;
- (void)configureTextFields;
- (void)setMessage:(id)arg1;
- (void)setInitialMessage:(id)arg1;
- (void)updateInitialMessage;
- (void)stopTimer;
- (void)startTimerWithDelay:(double)arg1;
- (void)startTimer;
- (void)buyButtonPressed:(id)arg1;
- (void)restoreButtonPressed:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithCountdown:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

