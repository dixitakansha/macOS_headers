//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPasteboardWriting-Protocol.h"

@class NSDate, NSImage, NSString, NSURL;

@interface PBAsset : NSObject <NSPasteboardWriting>
{
    NSURL *url;
    NSDate *dateLastUpdated;
    unsigned long long fileSize;
    NSImage *previewImage;
    BOOL _selected;
    BOOL _deleted;
    BOOL _processing;
    BOOL _loadLazily;
    BOOL _requestInProgress;
    unsigned long long _version;
}

+ (id)originalFilenamePathFromPath:(id)arg1;
+ (id)generateAssetFilenameForAssetClass:(Class)arg1;
+ (id)undoActionName;
+ (id)originalFilenameTemplate;
+ (id)filenameTemplate;
+ (id)fileTypes;
+ (id)fileExtension;
- (void).cxx_destruct;
- (id)shareItemType;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (void)flip;
- (id)bitmapImages;
- (void)requestPreviewImage;
- (BOOL)reloadPreviewImage;
- (BOOL)loadPreviewImage;
- (BOOL)loadLazily;
- (void)setLoadLazily:(BOOL)arg1;
- (void)setProcessing:(BOOL)arg1;
- (BOOL)processing;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (id)fullImageForTrayDrag;
- (id)fullImage;
- (void)setPreviewImage:(id)arg1;
- (void)freePreviewImage;
- (id)previewImage;
- (id)recentsPlistEntries;
- (void)performUndoDelete;
- (void)performDelete;
- (BOOL)moveFiles:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)originalFilename;
- (BOOL)exportOriginalTo:(id)arg1;
- (BOOL)canExportOriginal;
- (BOOL)isPrintable;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setDateLastUpdated:(id)arg1;
- (id)dateLastUpdated;
- (id)localizedTypeDescription;
- (id)filename;
- (void)setURL:(id)arg1;
- (id)url;
- (id)initWithURL:(id)arg1;
- (unsigned long long)imageVersion;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

