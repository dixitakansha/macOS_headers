//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEAction.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface IEActionRename : IEAction
{
    NSArray *sourceFSIs;
    NSString *newName;
    NSMutableArray *ma_originalNames;
    NSMutableArray *ma_outputFSIs;
}

- (void).cxx_destruct;
- (void)performUndo;
- (id)displayImage;
- (id)actionDisplaySubPath;
- (BOOL)performAction;
- (id)initRenameActionWithSourceFSI:(id)arg1 newName:(id)arg2;

@end

