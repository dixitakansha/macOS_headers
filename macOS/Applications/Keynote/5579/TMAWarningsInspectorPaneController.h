//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSBox, NSButton, NSLayoutConstraint, NSTextField, NSView, TMAWarningsTableViewController;

@interface TMAWarningsInspectorPaneController : TMAInspectorPaneController
{
    TMAWarningsTableViewController *_warningsTableViewController;
    NSView *_noWarningsView;
    NSLayoutConstraint *_centerVerticallyTitleLayoutConstraint;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSView *_contentContainerView;
    NSLayoutConstraint *_footerHeightConstraint;
    NSView *_footerView;
    NSButton *_warningsDisplayCheckbox;
    NSButton *_replaceFontsButton;
    NSLayoutConstraint *_topTitleLayoutConstraint;
    NSLayoutConstraint *_titleSubtitleVerticalSpaceConstraint;
    NSBox *_headerSeparatorLine;
    NSBox *_footerSeparatorLine;
}

+ (id)localizedProviderName;
+ (struct CGSize)defaultPaneSize;
+ (struct CGSize)minimumPaneSize;
@property(nonatomic) NSBox *footerSeparatorLine; // @synthesize footerSeparatorLine=_footerSeparatorLine;
@property(nonatomic) NSBox *headerSeparatorLine; // @synthesize headerSeparatorLine=_headerSeparatorLine;
@property(retain, nonatomic) NSLayoutConstraint *titleSubtitleVerticalSpaceConstraint; // @synthesize titleSubtitleVerticalSpaceConstraint=_titleSubtitleVerticalSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topTitleLayoutConstraint; // @synthesize topTitleLayoutConstraint=_topTitleLayoutConstraint;
@property(nonatomic) NSButton *replaceFontsButton; // @synthesize replaceFontsButton=_replaceFontsButton;
@property NSButton *warningsDisplayCheckbox; // @synthesize warningsDisplayCheckbox=_warningsDisplayCheckbox;
@property NSView *footerView; // @synthesize footerView=_footerView;
@property NSLayoutConstraint *footerHeightConstraint; // @synthesize footerHeightConstraint=_footerHeightConstraint;
@property NSView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_sheetDidEnd:(id)arg1;
- (void)_windowResignedKey:(id)arg1;
- (void)replaceFontsButtonClicked:(id)arg1;
- (void)warningsDisplayCheckboxPressed:(id)arg1;
- (id)document;
- (void)updateViewsHideSubtitle:(BOOL)arg1 hideWarningsTable:(BOOL)arg2 hideFooter:(BOOL)arg3;
- (void)updatePanes;
- (void)_textContainerViewFrameDidChange:(id)arg1;
- (void)_setupSeparatorLine:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)nibName;

@end

