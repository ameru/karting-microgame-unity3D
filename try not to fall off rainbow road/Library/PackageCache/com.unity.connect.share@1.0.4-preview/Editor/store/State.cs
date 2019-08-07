namespace Unity.Connect.Share.Editor.store
{
    public class AppState
    {
        public AppState(ShareState shareState = null)
        {
            this.shareState = shareState;
        }

        public readonly ShareState shareState;
    }

    public class ShareState
    {
        public ShareState(string title = null, string buildOutputDir = null, 
            string zipPath = null, ShareStep step = default, string errorMsg = null, 
            string key = null, int progress = 0, string url = null, string thumbnailDir = null)
        {
            this.title = title;
            this.buildOutputDir = buildOutputDir;
            this.zipPath = zipPath;
            this.step = step;
            this.errorMsg = errorMsg;
            this.progress = progress;
            this.url = url;
            this.key = key;
            this.thumbnailDir = thumbnailDir;
        }

        public ShareState copyWith(string title = null, string buildOutputDir = null, string zipPath = null,
            ShareStep? step = default, string errorMsg = null, string key = null, int? progress = null,
            string url = null, string thumbnailDir = null)
        {
            return new ShareState(
                title: title ?? this.title,
                buildOutputDir: buildOutputDir ?? this.buildOutputDir,
                zipPath: zipPath??this.zipPath,
                step: step??this.step,
                errorMsg: errorMsg??this.errorMsg,
                key: key ?? this.key,
                progress: progress ?? this.progress,
                url: url ?? this.url,
                thumbnailDir: thumbnailDir ?? this.thumbnailDir
                );
        }

        public readonly string title;
        public readonly string buildOutputDir;
        public readonly string zipPath;
        public readonly ShareStep step;
        public readonly string key;
        public readonly string errorMsg;
        public readonly int progress;
        public readonly string url;
        public readonly string thumbnailDir;

    }

    public enum ShareStep
    {
        idle,
        login,
        zip,
        upload,
        process
    }
}