//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "ClickableTextFieldDelegate-Protocol.h"

@class NSButton, NSLayoutConstraint, NSString, WarningView;
@protocol NSObject><FTAliasCellViewDelegate;

@interface FTAliasCellView : NSTableCellView <ClickableTextFieldDelegate>
{
    id <NSObject><FTAliasCellViewDelegate> _delegate;
    NSLayoutConstraint *_textFieldWidthConstraint;
    WarningView *_warningView;
    NSButton *_activatedCheckbox;
    id _originalTarget;
    SEL _originalAction;
    NSLayoutConstraint *_emptyFieldWidthConstraint;
}

+ (id)clickableStringForAliasVerificationStatus:(int)arg1;
+ (id)stringForAliasVerificationStatus:(int)arg1;
+ (long long)heightForCellType:(int)arg1;
@property(retain, nonatomic) NSLayoutConstraint *emptyFieldWidthConstraint; // @synthesize emptyFieldWidthConstraint=_emptyFieldWidthConstraint;
@property(nonatomic) SEL originalAction; // @synthesize originalAction=_originalAction;
@property(nonatomic) __weak id originalTarget; // @synthesize originalTarget=_originalTarget;
@property(nonatomic) __weak NSButton *activatedCheckbox; // @synthesize activatedCheckbox=_activatedCheckbox;
@property(nonatomic) __weak WarningView *warningView; // @synthesize warningView=_warningView;
@property(nonatomic) __weak NSLayoutConstraint *textFieldWidthConstraint; // @synthesize textFieldWidthConstraint=_textFieldWidthConstraint;
@property(nonatomic) id <NSObject><FTAliasCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_detailsButtonPressed:(id)arg1;
- (void)actionCancelled:(id)arg1;
- (void)mouseDownPressed:(id)arg1;
- (void)_aliasNamePressed:(id)arg1;
- (void)activateCheckboxPressed:(id)arg1;
- (void)_updateEnabledState;
- (void)_updateActiveState;
- (void)setChecked:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)layoutRTL;
- (void)startEditing;
- (id)alias;
- (void)setObjectValue:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

