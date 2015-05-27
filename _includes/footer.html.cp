<!-- Footer -->
<footer>
    <div class="container">
        <div class="row">
            <div class="col-lg-8 col-lg-offset-2 col-md-10 col-md-offset-1">
                <ul class="list-inline text-center">
                    <li>
                        <a href="{{ "/feed.xml" | prepend: site.baseurl }}">
                            <span class="fa-stack fa-lg">
                                <i class="fa fa-circle fa-stack-2x"></i>
                                <i class="fa fa-rss fa-stack-1x fa-inverse"></i>
                            </span>
                        </a>
                    </li>
                    {% if site.twitter_username %}
                    <li>
                        <a href="https://twitter.com/{{ site.twitter_username }}">
                            <span class="fa-stack fa-lg">
                                <i class="fa fa-circle fa-stack-2x"></i>
                                <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
                            </span>
                        </a>
                    </li>
                    {% endif %}
                    {% if site.facebook_username %}
                    <li>
                        <a href="https://www.facebook.com/{{ site.facebook_username }}">
                            <span class="fa-stack fa-lg">
                                <i class="fa fa-circle fa-stack-2x"></i>
                                <i class="fa fa-facebook fa-stack-1x fa-inverse"></i>
                            </span>
                        </a>
                    </li>
                    {% endif %}
                    {% if site.github_username %}
                    <li>
                        <a href="https://github.com/zycczy">
                            <span class="fa-stack fa-lg">
                                <i class="fa fa-circle fa-stack-2x"></i>
                                <i class="fa fa-github fa-stack-1x fa-inverse"></i>
                            </span>
                        </a>
                    </li>
                    {% endif %}
                </ul>
                <p class="copyright text-muted">Copyright &copy; {{ site.title }} {{ site.time | date: '%Y' }}</p>
            </div>
        </div>
    </div>
</footer>

<!-- jQuery -->
<script src="{{ "/js/jquery.min.js " | prepend: site.baseurl }}"></script>

<!-- Bootstrap Core JavaScript -->
<script src="{{ "/js/bootstrap.min.js " | prepend: site.baseurl }}"></script>

<!-- Custom Theme JavaScript -->
<script src="{{ "/js/clean-blog.min.js " | prepend: site.baseurl }}"></script>
