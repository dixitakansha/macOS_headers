//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTMacWPBasedCellEditorViewController.h"

#import "TSTTextCellEditorPresenting-Protocol.h"

@class NSString, NSView, TSDInteractiveCanvasController, TSKScrollView, TSTDataCellEditor;

@interface TSTMacTextCellEditorViewController : TSTMacWPBasedCellEditorViewController <TSTTextCellEditorPresenting>
{
}

- (void)prepareToEndEditing;

// Remaining properties
@property(nonatomic) TSTDataCellEditor *dataCellEditor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property(readonly, retain, nonatomic) TSKScrollView *scrollView;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) NSView *view;

@end

