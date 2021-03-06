//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDMasterModel.h>

#import <PhotoLibraryPrivate/RDModelAttachments-Protocol.h>
#import <PhotoLibraryPrivate/RDModelFingerprint-Protocol.h>

@class NSString, NSTimeZone;

@interface RDMaster : RDMasterModel <RDModelAttachments, RDModelFingerprint>
{
    NSTimeZone *_imageTimeZone;
}

+ (id)iLMBKeyPathsFromTable:(id)arg1;
+ (long long)nextVersionNumberForMasterUuid:(id)arg1 alternateMasterUuid:(id)arg2 inDatabase:(id)arg3;
+ (id)allVersionsForMaster:(id)arg1 andAlternateMaster:(id)arg2;
+ (id)mastersForVersions:(id)arg1;
+ (id)calculateFixedImageAssetForType:(unsigned char)arg1 size:(struct CGSize)arg2;
+ (id)supportedMasterTypes;
+ (id)supportedMasterImageTypes;
+ (id)supportedAudioTypes;
+ (id)supportedMovieTypes;
+ (id)utiFromMetadata:(id)arg1 Extension:(id)arg2;
+ (BOOL)conformsToUTType:(struct __CFString *)arg1 forExtention:(id)arg2;
+ (BOOL)conformsToUTTypes:(id)arg1 forExtention:(id)arg2;
+ (BOOL)isSupportedFile:(id)arg1 extension:(id)arg2;
+ (BOOL)isSupportedFile:(id)arg1 uti:(id)arg2;
+ (id)utiFromHFSType:(unsigned int)arg1;
+ (id)utiFromExtension:(id)arg1;
+ (unsigned long long)totalDiskSpaceForAllMasters:(id)arg1;
+ (id)removeFromTrash:(id)arg1 withReason:(unsigned int)arg2;
+ (id)putInTrash:(id)arg1 withReason:(unsigned int)arg2;
+ (id)allMastersForMasters:(id)arg1;
+ (BOOL)isMasterFilePathVideo:(id)arg1;
+ (void)repairMasterInTrashStateWithRepair:(id)arg1;
+ (void)repairDuplicateSyncedMastersWithRepair:(id)arg1;
+ (void)repairImageDate:(id)arg1;
+ (void)repairDuplicateAlternateMasterUuid:(id)arg1;
+ (void)repairIncompleteImportWithRepair:(id)arg1;
+ (BOOL)deleteIncompletelyImportedMasterModels:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
+ (BOOL)_checkStatusOfFilesForMasters:(id)arg1 deleteImmediately:(id)arg2 skip:(id)arg3;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned int)arg2;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned int)arg2 progressBlock:(CDUnknownBlockType)arg3;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned int)arg2 deleteImmediately:(id)arg3 skip:(id)arg4;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned int)arg2 deleteImmediately:(id)arg3 skip:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
+ (id)uniqueManagedImagePathForMasterDirectory:(id)arg1 fileName:(id)arg2 forceUnique:(BOOL)arg3;
+ (id)fixMissingFileNameForMaster:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cloudIdentifier;
- (id)cgImageProperties;
- (id)metadata;
- (id)oldestVersion;
- (id)oldestVersionFromVersions:(id)arg1;
- (id)alternateMaster;
- (long long)nextVersionNumber;
- (id)allVersionsIncludingAlternateMaster;
- (id)allVersionsWithPropertyKeys:(id)arg1;
- (id)allVersions;
- (id)allVersionUuids;
- (id)anyVersion;
- (id)versionsWithPropertyKeys:(id)arg1;
- (id)versions;
- (void)setGeneratedFingerprintWithData:(id)arg1;
- (void)setGeneratedFingerprintWithHandler:(CDUnknownBlockType)arg1;
- (id)timeZoneAdjustedImageDate;
- (id)imageTimeZone;
- (void)setImageTimeZoneOffsetSeconds:(id)arg1;
- (void)setImageDate:(id)arg1;
- (void)resetHasAttachments;
- (id)attachments;
- (BOOL)isUnsupportedUTType;
- (BOOL)conformsToUTType:(struct __CFString *)arg1;
- (BOOL)conformsToUTTypes:(id)arg1;
- (void)setUnsupportedUTType;
- (BOOL)isJpegPrimary;
- (BOOL)isRawPrimary;
- (BOOL)isRawPlusJpeg;
- (BOOL)isRawImage;
- (BOOL)isImage;
- (BOOL)isMovieOrAudio;
- (BOOL)isMovie;
- (BOOL)isAudio;
- (unsigned short)subType;
- (unsigned char)type;
- (void)setIsMissing:(BOOL)arg1;
- (void)setIsInTrash:(BOOL)arg1 reason:(unsigned int)arg2;
- (void)setIsInTrash:(BOOL)arg1;
- (void)cacheMetadata:(id)arg1;
- (void)setFileVolumeUuid:(id)arg1;
- (struct PFIntSize_st)size;
- (void)setFileName:(id)arg1;
- (id)importGroupName;
- (id)importGroup;
- (CDUnknownBlockType)willPersist;
- (BOOL)isBurstMaster;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (short)modelType;
- (id)nextAvailableNewVersionName;
- (id)extension;
- (id)initWithName:(id)arg1 importGroup:(id)arg2 withFilePath:(id)arg3 isReference:(BOOL)arg4 metadata:(id)arg5;
- (id)initWithUuid:(id)arg1 name:(id)arg2 importGroup:(id)arg3 withFilePath:(id)arg4 isReference:(BOOL)arg5 metadata:(id)arg6;
- (BOOL)moveFilePathToTrash:(id)arg1 trashPaths:(id)arg2;
- (id)renameMasterMediaWithUTI:(id)arg1;
- (id)setFilenameFastModernizeVideoMediaWithMetadata:(id)arg1;
- (id)utiFastModernizeVideoMediaWithMetadata:(id)arg1;
- (id)generateUTI;
- (BOOL)isReallyAvailable;
- (BOOL)_checkMasterAvailableOnDisk;
- (void)setupReferenceFileURL:(id)arg1 volume:(id)arg2;
- (void)convertToManagedWithImagePath:(id)arg1;
- (BOOL)isOffline;
- (BOOL)isLikelyAvailable;
- (BOOL)isStillImporting;
- (id)allManagedMasterDirectoryPaths;
- (void)findCommonReferencedRootFolderCompletion:(CDUnknownBlockType)arg1;
- (id)writeAccessMasterFileURL;
- (id)masterFileURL;
- (void)accessMasterURL:(CDUnknownBlockType)arg1;
- (id)bookmark;
- (id)uniqueManagedImagePath;
- (void)setManagedImagePath:(id)arg1;
- (id)managedImagePath;
- (void)setFileVolume:(id)arg1;
- (id)fileVolume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

