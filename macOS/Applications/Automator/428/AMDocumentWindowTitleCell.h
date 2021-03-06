//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMDocumentWindowTitleCell : NSTextFieldCell
{
    NSTextFieldCell *_typeTextFieldCell;
    NSTextFieldCell *_titleSubCell;
    NSString *_workflowType;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_attributedStringValueUpdated;
- (void)_workflowTypeUpdated;
- (void)setAttributedStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)_typeTextFieldCell;
- (id)_titleTextFieldCell;
@property(retain) NSString *workflowTypeString; // @synthesize workflowTypeString=_workflowType;
- (void)dealloc;

@end

