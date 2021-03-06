//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "MKMultiLineLabelContainer-Protocol.h"

@class MKViewWithHairline, NSLayoutConstraint, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface NVRouteCellView : NSTableCellView <MKMultiLineLabelContainer>
{
    MKViewWithHairline *_separator;
    NSLayoutConstraint *_leadingTextConstraint;
    NSLayoutConstraint *_leadingImageConstraint;
    NSView *_highlightView;
    BOOL _shouldHighlight;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
}

@property(nonatomic) BOOL shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(nonatomic) __weak NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_setHighlightViewIfNeeded;
- (void)_updateHighlightVisibility;
- (void)setBackgroundStyle:(long long)arg1;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (void)setHairlineMarginLeading:(double)arg1 andTrailing:(double)arg2 insetContent:(BOOL)arg3;
- (id)multilineTextFieldsWithinContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

