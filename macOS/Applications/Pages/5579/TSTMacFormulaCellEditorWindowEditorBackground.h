//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint;

@interface TSTMacFormulaCellEditorWindowEditorBackground : NSView
{
    NSLayoutConstraint *mWidthConstraint;
    NSLayoutConstraint *mHeightConstraint;
    struct CGSize mEditorSize;
}

@property(nonatomic) struct CGSize editorSize; // @synthesize editorSize=mEditorSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

