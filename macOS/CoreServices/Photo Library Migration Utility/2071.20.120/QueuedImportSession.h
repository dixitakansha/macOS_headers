//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class Album, ImportSession2, NSArray;

@interface QueuedImportSession : NSObject
{
    ImportSession2 *_session;
    NSArray *_files;
    struct IPPhotoList *_photos;
    Album *_cameraAlbum;
    Album *_photoCDAlbum;
}

- (void)dealloc;
- (id)initWithImportSession:(id)arg1;

@end

