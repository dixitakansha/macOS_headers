//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBackgroundView.h"

@class NSButton, NSMutableArray;
@protocol SlideshowSettingsToolbarDelegate;

@interface IPXSlideshowSettingsToolbarView : IPXBackgroundView
{
    NSMutableArray *_customLayoutConstraints;
    NSButton *_stylesPickerButton;
    NSButton *_audioPickerButton;
    NSButton *_advancedSettingsButton;
    BOOL _buttonsEnabled;
    BOOL _toolbarEnabled;
    id <SlideshowSettingsToolbarDelegate> _delegate;
}

@property(nonatomic) BOOL toolbarEnabled; // @synthesize toolbarEnabled=_toolbarEnabled;
@property(nonatomic) BOOL buttonsEnabled; // @synthesize buttonsEnabled=_buttonsEnabled;
@property __weak id <SlideshowSettingsToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetButtonAccessibilityLabels;
- (void)a_toggleAdvancedSettings:(id)arg1;
- (void)a_toggleAudioPicker:(id)arg1;
- (void)a_toggleStylesPicker:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

