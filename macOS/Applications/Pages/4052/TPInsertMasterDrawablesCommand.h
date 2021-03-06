//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class NSArray, TSPObject;
@protocol TPMasterDrawableProvider;

@interface TPInsertMasterDrawablesCommand : TSKCommand
{
    TSPObject<TPMasterDrawableProvider> *_masterDrawableProvider;
    NSArray *_masterDrawables;
    unsigned long long _drawableIndex;
    NSArray *_processedDrawables;
    NSArray *_addedCustomFormatKeys;
}

- (void)redo;
- (id)redoDolcContext;
- (void)undo;
- (void)commit;
- (void)commitWithDOLCContext:(id)arg1;
- (id)actionString;
- (BOOL)process;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 masterDrawableProvider:(id)arg2 drawables:(id)arg3 drawableIndex:(unsigned long long)arg4;

@end

