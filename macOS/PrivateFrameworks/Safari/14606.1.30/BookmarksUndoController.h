//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUndoManager;

__attribute__((visibility("hidden")))
@interface BookmarksUndoController : NSObject
{
    NSUndoManager *_undoManager;
    NSUndoManager *_strongUndoManager;
    unsigned long long _undoCompatibleChangeCount;
    NSMutableArray *_transactionActionNameStack;
}

+ (void)_presentTestDriveTerminationPromptWhenPermitted;
+ (BOOL)canPerformUserInitiatedBookmarkOperations;
+ (id)frontmostUndoController;
@property(nonatomic) __weak NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (id)_insertBookmarksFromPasteboard:(id)arg1 inFolder:(id)arg2 startingIndex:(unsigned long long)arg3 undoTarget:(id)arg4 selector:(SEL)arg5 isCopy:(BOOL)arg6;
- (id)_addNewFolderTo:(id)arg1 withTitle:(id)arg2 insertionIndex:(unsigned long long)arg3 undoTarget:(id)arg4 selector:(SEL)arg5;
- (BOOL)_moveBookmarks:(id)arg1 to:(id)arg2 startingIndex:(unsigned long long)arg3 isCopy:(BOOL)arg4 undoTarget:(id)arg5 selector:(SEL)arg6 addedBookmarks:(id *)arg7;
- (id)_redoMoveBookmarksWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 undoPreflightBlock:(CDUnknownBlockType)arg4 undoCompletionBlock:(CDUnknownBlockType)arg5;
- (id)_undoMoveBookmarksWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 redoPreflightBlock:(CDUnknownBlockType)arg4 redoCompletionBlock:(CDUnknownBlockType)arg5;
- (id)_undoMoveBookmarks:(id)arg1;
- (void)_redoNewBookmarkWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 undoPreflightBlock:(CDUnknownBlockType)arg4 undoCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_undoNewBookmarkWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 redoPreflightBlock:(CDUnknownBlockType)arg4 redoCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_undoNewBookmark:(id)arg1;
- (void)_redoRemoveBookmarks:(id)arg1;
- (void)_undoRemoveBookmarks:(id)arg1;
- (void)_undoChangeAddress:(id)arg1;
- (void)_undoChangePreviewText:(id)arg1;
- (void)_undoChangeTitle:(id)arg1;
- (id)_popTransactionActionNameStack;
- (id)_bookmarkForContentChangeUndoInfo:(id)arg1;
- (void)_bookmarksChanged:(id)arg1;
- (void)_stopObservation;
- (void)_startObservation;
- (id)copyBookmarksFromPasteboard:(id)arg1 toFolder:(id)arg2 startingIndex:(unsigned long long)arg3;
- (id)moveBookmarksFromPasteboard:(id)arg1 toFolder:(id)arg2 startingIndex:(unsigned long long)arg3;
- (BOOL)toggleFolderAutomaticallyReplacesTabs:(id)arg1;
- (BOOL)insertBookmarks:(id)arg1 startingAtIndex:(unsigned long long)arg2 inBookmarkFolder:(id)arg3;
- (BOOL)insertBookmark:(id)arg1 atIndex:(unsigned long long)arg2 inBookmarkFolder:(id)arg3 allowDuplicateURLs:(BOOL)arg4;
- (id)moveBookmarks:(id)arg1 toNewFolderWithTitle:(id)arg2 replacingBookmark:(id)arg3;
- (id)addNewFolderTo:(id)arg1 withTitle:(id)arg2 insertionIndex:(unsigned long long)arg3;
- (BOOL)moveBookmarks:(id)arg1 to:(id)arg2 startingIndex:(unsigned long long)arg3;
- (BOOL)removeBookmarks:(id)arg1;
- (BOOL)changeAddressOfBookmark:(id)arg1 to:(id)arg2;
- (BOOL)changePreviewTextOfBookmark:(id)arg1 to:(id)arg2 isUserCustomized:(BOOL)arg3;
- (BOOL)changeTitleOfBookmark:(id)arg1 to:(id)arg2;
- (void)_reorderBookmarksAsMovesWithSortedBookmarks:(id)arg1;
- (id)_cleanUpBookmarksByAddressForBookmarks:(id)arg1;
- (id)_cleanUpBookmarksByNameForBookmarks:(id)arg1;
- (void)cleanUpBookmarksByAddressForFolder:(id)arg1;
- (void)cleanUpBookmarksByNameForFolder:(id)arg1;
- (id)addNewContentsFolderTo:(id)arg1 withTitle:(id)arg2 insertionIndex:(unsigned long long)arg3 undoTarget:(id)arg4 selector:(SEL)arg5;
- (void)finishMovingBookmarks:(id)arg1 originalBookmarks:(id)arg2 undoTarget:(id)arg3 selector:(SEL)arg4;
- (id)copyBookmarksFromPasteboard:(id)arg1 toFolder:(id)arg2 startingIndex:(unsigned long long)arg3 undoTarget:(id)arg4 selector:(SEL)arg5;
- (id)moveBookmarksFromPasteboard:(id)arg1 toFolder:(id)arg2 startingIndex:(unsigned long long)arg3 undoTarget:(id)arg4 selector:(SEL)arg5;
- (void)redoMoveBookmarksWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 undoPreflightBlock:(CDUnknownBlockType)arg4 undoCompletionBlock:(CDUnknownBlockType)arg5;
- (void)undoMoveBookmarksWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 redoPreflightBlock:(CDUnknownBlockType)arg4 redoCompletionBlock:(CDUnknownBlockType)arg5;
- (void)redoNewBookmarkWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 undoPreflightBlock:(CDUnknownBlockType)arg4 undoCompletionBlock:(CDUnknownBlockType)arg5;
- (void)undoNewBookmarkWithUndoInfo:(id)arg1 preflightBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 redoPreflightBlock:(CDUnknownBlockType)arg4 redoCompletionBlock:(CDUnknownBlockType)arg5;
- (id)replaceBookmarksWithUndoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3 reverseOrder:(BOOL)arg4;
- (void)removeBookmarksWithUndoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)performUndoCompatibleBookmarksChangeWithActionName:(id)arg1 logActionName:(id)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)performUndoCompatibleBookmarksChangeInBlock:(CDUnknownBlockType)arg1;
- (void)didPerformUndoCompatibleBookmarksChange;
- (void)willPerformUndoCompatibleBookmarksChange;
- (void)setCurrentTransactionActionName:(id)arg1;
- (void)endTransaction;
- (void)beginTransactionWithActionName:(id)arg1 logActionName:(id)arg2;
- (id)initWithUndoManager:(id)arg1;
- (void)dealloc;
- (id)init;

@end

