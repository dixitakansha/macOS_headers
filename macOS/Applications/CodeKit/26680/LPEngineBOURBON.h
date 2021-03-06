//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCompiler, NSString;

__attribute__((visibility("hidden")))
@interface LPEngineBOURBON : NSObject
{
    LPCompiler *_rootCompiler;
    NSString *_pathToBourbonRootStylesheetFolder;
    NSString *_pathToBittersStylesheetFolder;
    NSString *_pathToBourbonNeatRootStylesheetFolder;
}

@property(readonly) NSString *pathToBourbonNeatRootStylesheetFolder; // @synthesize pathToBourbonNeatRootStylesheetFolder=_pathToBourbonNeatRootStylesheetFolder;
@property(readonly) NSString *pathToBourbonRootStylesheetFolder; // @synthesize pathToBourbonRootStylesheetFolder=_pathToBourbonRootStylesheetFolder;
- (void)installBittersFilesInFolder:(id)arg1 forProject:(id)arg2 fromTaskGroup:(id)arg3;
- (void)installBourbonNeatFilesInFolder:(id)arg1 forProject:(id)arg2 fromTaskGroup:(id)arg3;
- (void)installBourbonFilesInFolder:(id)arg1 forProject:(id)arg2 fromTaskGroup:(id)arg3;
- (void)dealloc;
- (id)initWithRootCompiler:(id)arg1;

@end

