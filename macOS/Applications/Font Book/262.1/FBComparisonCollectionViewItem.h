//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import "NSTextViewDelegate-Protocol.h"

@class FBBackgroundView, FBExtendedSampleText, NSBox, NSString, NSTextField, NSTextView;

@interface FBComparisonCollectionViewItem : NSCollectionViewItem <NSTextViewDelegate>
{
    BOOL _isEditing;
    NSTextField *_faceNameField;
    NSTextView *_sampleTextView;
    FBBackgroundView *_backgroundView;
    NSBox *_box;
    double _desiredHeight;
}

@property BOOL isEditing; // @synthesize isEditing=_isEditing;
@property double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(retain) NSBox *box; // @synthesize box=_box;
@property FBBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) NSTextView *sampleTextView; // @synthesize sampleTextView=_sampleTextView;
@property(retain) NSTextField *faceNameField; // @synthesize faceNameField=_faceNameField;
@property(readonly, retain) FBExtendedSampleText *_representedSampleText;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)mouseDown:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (id)representedObject;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

