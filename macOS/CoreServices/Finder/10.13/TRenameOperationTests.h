//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TRenameOperationDelegate;

@interface TRenameOperationTests : NSObject
{
    struct TFENode _testFolderNode;
    TRenameOperationDelegate *_renameDelegate;
}

+ (struct TFENode)copyNode:(const struct TFENode *)arg1 toDest:(const struct TFENode *)arg2 optName:(const struct TString *)arg3;
+ (struct TFENode)fetchTestFolder;
+ (void)runTests;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)testRename:(const struct TFENode *)arg1 matrix:(const struct TestRenameNameRecord *)arg2 prefix:(const struct TString *)arg3;
- (void)testFileRename;
- (void)testImageRename;
- (void)testAppRename;

@end

