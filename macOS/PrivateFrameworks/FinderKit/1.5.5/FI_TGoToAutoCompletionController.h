//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FI_TGoToAutoCompletionController : NSObject <NSCopying>
{
    struct TSpinLock _lock;
    struct TString _pathToCompleteStr;
    struct TString _adjustedPathToCompleteStr;
    struct TFENodeVector _nodesInPath;
    _Bool _adjustedPathToCompleteIsValid;
    _Bool _isAutoCompleting;
    _Bool _isQuit;
    vector_9b715b12 _completionNodesAndNames;
    vector_9b715b12 _filteredSortedCompletionNodesAndNames;
    function_f9feaa7d _updatePathHandler;
    function_efcd7882 _autoCompleHandler;
    function_35ade228 _completionHandler;
}

+ (vector_9b715b12)_filterCompletionNodesAndNames:(const vector_9b715b12 *)arg1 withPartialWord:(const struct TString *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_canReuseControllerWithPath:(const struct TString *)arg1;
- (_Bool)canReuseControllerWithPath:(const struct TString *)arg1;
- (id)completionNamesForPartialWord:(const struct TString *)arg1;
- (void)autoCompletePath:(const struct TString *)arg1 relativeToNode:(const struct TFENode *)arg2 updatePathHandler:(function_f9feaa7d)arg3 autoCompleHandler:(function_efcd7882)arg4 completionHandler:(function_35ade228)arg5;
- (void)quit;
- (void)_setQuit:(_Bool)arg1;
- (_Bool)_isQuit;
@property(readonly, nonatomic) _Bool isQuit; // @dynamic isQuit;
- (void)_setIsAutoCompleting:(_Bool)arg1;
- (void)setIsAutoCompleting:(_Bool)arg1;
- (_Bool)_isAutoCompleting;
@property(readonly, nonatomic) _Bool isAutoCompleting; // @dynamic isAutoCompleting;
- (void)_setFilteredSortedCompletionNodesAndNames:(const vector_9b715b12 *)arg1;
- (const vector_9b715b12 *)_filteredSortedCompletionNodesAndNames;
- (vector_9b715b12)filteredSortedCompletionNodesAndNames;
- (void)_setCompletionNodesAndNames:(const vector_9b715b12 *)arg1;
- (const vector_9b715b12 *)_completionNodesAndNames;
- (vector_9b715b12)completionNodesAndNames;
- (void)_setNodesInPath:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)_nodesInPath;
- (struct TFENodeVector)nodesInPath;
- (void)_setAdjustedPathToCompleteIsValid:(_Bool)arg1;
- (_Bool)_adjustedPathToCompleteIsValid;
@property(readonly, nonatomic) _Bool adjustedPathToCompleteIsValid; // @dynamic adjustedPathToCompleteIsValid;
- (void)_setAdjustedPathToCompleteStr:(const struct TString *)arg1;
- (const struct TString *)_adjustedPathToCompleteStr;
@property(readonly, nonatomic) struct TString adjustedPathToCompleteStr; // @dynamic adjustedPathToCompleteStr;
- (void)_setPathToCompleteStr:(const struct TString *)arg1;
- (const struct TString *)_pathToCompleteStr;
@property(readonly, nonatomic) struct TString pathToCompleteStr; // @dynamic pathToCompleteStr;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

