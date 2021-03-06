//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"

@class NSArray, TPDocumentRoot, TSDUndoObject;

@interface TPInsertDrawablesCommand : TSKCommand <GSSPAutoEncodable, TSDCommandInducedForPropagation>
{
    BOOL _isPasting;
    NSArray *_argsList;
    NSArray *_pageIndexList;
    NSArray *_drawableInfoList;
    NSArray *_tagsList;
    NSArray *_addedCustomFormatKeys;
    unsigned int _savedNextUntitledResolverIndex;
    TSDUndoObject *_drawableUndoObject;
}

@property(nonatomic) unsigned int savedNextUntitledResolverIndex; // @synthesize savedNextUntitledResolverIndex=_savedNextUntitledResolverIndex;
- (void).cxx_destruct;
- (void)p_checkArgsListSortOrder;
- (void)p_invalidatePage:(unsigned long long)arg1;
- (void)p_validateTagsList;
- (void)p_validatePageIndexList;
- (void)p_validateArgsList;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (id)actionString;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)p_rebuildDrawableInfoListForRollback;
- (void)commit;
- (void)p_commitWithDOLCContext:(id)arg1;
- (BOOL)process;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct InsertDrawablesCommandArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct InsertDrawablesCommandArchive *)arg1 unarchiver:(id)arg2;
@property(retain, nonatomic) NSArray *drawableInfoList;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot;
- (id)initWithContext:(id)arg1 argsList:(id)arg2 pageIndexList:(id)arg3 tagsList:(id)arg4 drawableUndoObject:(id)arg5;
- (id)initWithContext:(id)arg1 argsList:(id)arg2 pageIndexList:(id)arg3 drawableInfoList:(id)arg4;
- (id)initWithContext:(id)arg1 drawables:(id)arg2 pageIndexList:(id)arg3 tags:(id)arg4 zOrder:(unsigned long long)arg5 forPaste:(BOOL)arg6;
- (id)initWithContext:(id)arg1 drawables:(id)arg2 pageIndexList:(id)arg3 zOrder:(unsigned long long)arg4 forPaste:(BOOL)arg5;
- (void)populateGSSPCmdPageInsertDrawables:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *otherSerializationClasses;

@end

