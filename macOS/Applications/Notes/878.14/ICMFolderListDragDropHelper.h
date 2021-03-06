//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICFolder, ICMFolderListDragNoteInfo, ICMFolderListTreeController, NFFolder, NSString;

@interface ICMFolderListDragDropHelper : NSObject
{
    ICMFolderListTreeController *_treeController;
    NSString *_undoActionName;
    ICMFolderListDragNoteInfo *_currentInfo;
    NFFolder *_htmlFolderToSelectOnCompletion;
    ICFolder *_modernFolderToSelectOnCompletion;
}

@property(retain, nonatomic) ICFolder *modernFolderToSelectOnCompletion; // @synthesize modernFolderToSelectOnCompletion=_modernFolderToSelectOnCompletion;
@property(retain, nonatomic) NFFolder *htmlFolderToSelectOnCompletion; // @synthesize htmlFolderToSelectOnCompletion=_htmlFolderToSelectOnCompletion;
@property(retain, nonatomic) ICMFolderListDragNoteInfo *currentInfo; // @synthesize currentInfo=_currentInfo;
@property(retain, nonatomic) NSString *undoActionName; // @synthesize undoActionName=_undoActionName;
@property(retain, nonatomic) ICMFolderListTreeController *treeController; // @synthesize treeController=_treeController;
- (void).cxx_destruct;
- (void)showAlertForMovingLockedNotesToUnsupportedAccountsWithNoteInfo:(id)arg1;
- (void)showAlertForMovingSharedNotesAcrossAccounts;
- (void)showAlertForUnsupportedAttachmentsFolderDrop;
- (void)showMoveModernNotesToHTMLDestinationWithAttachmentsIfNecessaryForNoteInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateUndoActionName;
- (id)treeNodeForDraggingInfo:(id)arg1;
- (unsigned long long)dragTypeForDraggingInfo:(id)arg1;
- (id)destinationNodeForItem:(id)arg1;
- (void)updateDropPointForDraggingFolderToDestinationTreeNode:(id)arg1 draggedTreeNode:(id)arg2 item:(id)arg3;
- (BOOL)notes:(id)arg1 containsNoteNotInDestinationNode:(id)arg2;
- (void)authenticateLockedNotesIfNecessaryForNoteInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)HTMLNotesForDraggingInfo:(id)arg1;
- (id)modernNotesForDraggingInfo:(id)arg1;
- (id)notesForDraggingInfo:(id)arg1;
- (BOOL)acceptModernDestinationDropForNoteInfo:(id)arg1;
- (BOOL)acceptHTMLDestinationDropForNoteInfo:(id)arg1;
- (BOOL)acceptDropForNoteInfo:(id)arg1;
- (BOOL)acceptHTMLDestinationDropForFolderInfo:(id)arg1;
- (void)acceptModernDestinationDropForModernFolderInfo:(id)arg1;
- (BOOL)acceptModernDestinationDropForFolderInfo:(id)arg1;
- (BOOL)acceptFolderDropForFolderInfo:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 adjustDropPointIfNecessary:(BOOL)arg5;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)moveModernSubfolderIfNecessary:(id)arg1 modernParentFolder:(id)arg2 noteInfo:(id)arg3;
- (void)performHTMLDestinationDropForHTMLFolderInfo:(id)arg1;
- (void)performModernDestinationDropForHTMLFolderInfo:(id)arg1;
- (void)performModernDestinationDropForModernFolderInfo:(id)arg1;
- (void)performMoveHTMLNotesToHTMLDestinationForNoteInfo:(id)arg1;
- (void)performMoveHTMLNotesToModernDestinationForNoteInfo:(id)arg1;
- (void)performMoveModernNotes:(id)arg1 toFolder:(id)arg2 copyOperation:(BOOL)arg3 noteInfo:(id)arg4;
- (void)performMoveModernNotesToModernDestinationForNoteInfo:(id)arg1;
- (void)performMoveModernNotesToHTMLDestinationForNoteInfo:(id)arg1;

@end

